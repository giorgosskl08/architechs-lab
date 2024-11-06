#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <time.h>

#define MAX_VAL 255

#define LM 6
#define LN 6
#define LP 6

#define M (1 <<  LM)
#define N (1 <<  LN)
#define P (1 <<  LP)

void initializeMatrixA(uint8_t A[N][M]){
	for (int i=0; i<N; i++){
		for (int j=0; j<M; j++){
			A[i][j] = rand() % (MAX_VAL + 1);
		}
	}
}

void initializeMatrixB(uint8_t B[M][P]){
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
