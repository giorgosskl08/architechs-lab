#include <ap_int.h>
#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 16
#define DATAWIDTH 512
#define DIMEN_SIZE 16 // Dimention of our matrices
#define VECTOR_SIZE (DATAWIDTH / 32) // 512/32 = 16 elements in each vector
typedef ap_uint<DATAWIDTH> uint512_dt;

const unsigned int c_chunk_sz = BUFFER_SIZE;
const unsigned int c_size     = VECTOR_SIZE;

extern "C"
{
    void vadd(
        const uint512_dt *in1,
        const uint512_dt *in2,
        uint512_dt *out,
        int size
    )
    {
#pragma HLS INTERFACE m_axi port = in1 bundle = gmem
#pragma HLS INTERFACE m_axi port = in2 bundle = gmem1
#pragma HLS INTERFACE m_axi port = out bundle = gmem2
#pragma HLS INTERFACE s_axilite port = in1 bundle = control
#pragma HLS INTERFACE s_axilite port = in2 bundle = control
#pragma HLS INTERFACE s_axilite port = out bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control

        uint512_dt v1_local[BUFFER_SIZE]; // The buffer has size 16, with each element representing a vector, so 256 elements in total
        uint512_dt v2_local[BUFFER_SIZE]; // Same for this buffer
	//Removed the local buffer for results

        int size_in16 = (size - 1) / VECTOR_SIZE + 1; //Equal to 16.9375

        for (int i = 0; i < size_in16; i += BUFFER_SIZE) { // 1 iteration

            int chunk_size = BUFFER_SIZE;
            if ((i + BUFFER_SIZE) > size_in16)
                chunk_size = size_in16 - i;

            for (int j = 0; j < chunk_size; j++) { //Passing the matrices from global to local memory
#pragma HLS pipeline
#pragma HLS LOOP_TRIPCOUNT min = 1 max = 16 //Used because chunk_size is not a constant 
                v1_local[j] = in1[j]; //Each element represents a row of the original 2D matrix
                v2_local[j] = in2[j]; //Each element represents a column of the original 2D matrix (because of the transposition)
            }

            for (int j = 0; j < chunk_size; j++) { //Iterating for all the ''rows''
		for (int k = 0; k < chunk_size; k++){ //Iterating for all the ''collumns''
#pragma HLS pipeline
#pragma HLS LOOP_TRIPCOUNT min = 1 max = 16 //Used because chunk_size is not a constant 
                uint512_dt tmpV1 = v1_local[j]; //Passing a row
                uint512_dt tmpV2 = v2_local[k]; //Passing a collumn
                ap_uint<32> tmpOut = 0; //Changed it into a single 32bit element

                for (int vector = 0; vector < VECTOR_SIZE; vector++) { //16 multiplications resulting in a single element 
#pragma HLS UNROLL
                    ap_uint<32> tmp1 = tmpV1.range(32 * (vector + 1) - 1, vector * 32);
                    ap_uint<32> tmp2 = tmpV2.range(32 * (vector + 1) - 1, vector * 32);
                    ap_uint<32> product = tmp1 * tmp2;
                    tmpOut += product;
                }

                out[j].range(32 * (k + 1) - 1, k * 32) = tmpOut; //Passing the tmpOut to the right element of out
		}
            }
        }
    }
}
