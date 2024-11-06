#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <time.h>

#define MAX_VAL 255 // Μέγιστη τιμή για 8-bit unsigned integer

#define LM 3
#define LN 4
#define LP 5

#define M (1 <<  LM)
#define N (1 <<  LN)
#define P (1 <<  LP)

void initializeMatrixA(uint8_t A[N][M]);
void initializeMatrixB(uint8_t B[M][P]);
void matrixMultiplication(uint8_t A[N][M], uint8_t B[M][P], uint32_t AB[N][P]);

void main()
{
    uint8_t A[N][M] = {0};
    uint8_t B[M][P] = {0};
    uint32_t AB[N][P] = {0};

    srand(time(0)); // Αρχικοποίηση του τυχαίου αριθμού για τυχαίες τιμές

    initializeMatrixA(A);
    initializeMatrixB(B);
    multiplyMatrices(A, B, AB);

    for (int i = 0; i < N; i++) {
            for (int j = 0; j < P; j++) {
                printf("%u ", AB[i][j]);
            }
            printf("\n");
        }

    return 0;
}

void initializaMatrixA(uint8_t A[N][M]){
	for (int i=0; i<N; i++){
		for (int j=0; j<M; j++){
			A[i][j] = rand() % (MAX_VAL + 1);
		}
	}
}

void initializaMatrixB(uint8_t B[M][P]){
	for (int i=0; i<M; i++){
		for (int j=0; j<P; j++){
			B[i][j] = rand() % (MAX_VAL + 1);
		}
	}
}

void matrixMultiplication(uint8_t A[N][M], uint8_t B[M][P], uint32_t AB[N][P]){
	for (int i=0; i<N; i++){
		for (int j=0; j<P; j++){
			AB[i][j] = 0;
			for (int k=1; k<M; k++){
				AB[i][j] += A[i][k] * B[k][j];
			}
		}
	}
}
