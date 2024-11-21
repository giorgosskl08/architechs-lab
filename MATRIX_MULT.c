#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <time.h>

#define MAX_VAL 255

#define LM 6
#define LN 6
#define LP 6

#define M (1 << LM)
#define N (1 << LN)
#define P (1 << LP)

void matrixMultiplication(uint8_t A[N*M], uint8_t B[M*P], uint32_t AB[N*P]) {
	#pragma HLS ARRAY_PARTITION variable=A type=cyclic factor=M dim=0
    #pragma HLS ARRAY_PARTITION variable=B type=cyclic factor=M dim=1
    #pragma HLS ARRAY_PARTITION variable=AB complete
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < P; j++) {
				AB[(i * P) + j] = 0;
				#pragma HLS UNROLL
				for (int k = 0; k < M; k++) {
					AB[(i * P) + j]  += A[(i * M) + k] * B[(k * P) + j];
				}
			}
		}
	}
