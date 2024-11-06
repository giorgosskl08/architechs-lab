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

void initializeMatrixA(uint8_t A[N][M]);
void initializeMatrixB(uint8_t B[M][P]);
void matrixMultiplication(uint8_t A[N][M], uint8_t B[M][P], uint32_t AB[N][P]);

int main()
{
    uint8_t A[N][M] = {0};
    uint8_t B[M][P] = {0};
    uint32_t AB[N][P] = {0};

    srand(time(0));

    initializeMatrixA(A);
    initializeMatrixB(B);
    matrixMultiplication(A, B, AB);

    for (int i = 0; i < N; i++) {
            for (int j = 0; j < P; j++) {
                printf("%u ", AB[i][j]);
            }
            printf("\n");
        }
    printf("Test passed");
    return 0;
}
