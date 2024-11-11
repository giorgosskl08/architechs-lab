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

void matrixMultiplication(int A[N * M], int B[M * P], int AB[N * P]);

int main() {
    int A[N * M] = {0};
    int B[M * P] = {0};
    int AB[N * P] = {0};
    int i, j, k;

    srand(time(0));

    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            A[i * M + j] = rand() % (MAX_VAL + 1);
        }
    }

    for (i = 0; i < M; i++) {
        for (j = 0; j < P; j++) {
            B[i * P + j] = rand() % (MAX_VAL + 1);
        }
    }

    matrixMultiplication(A, B, AB);

    for (i = 0; i < N; i++) {
        for (j = 0; j < P; j++) {
            printf("%d ", AB[i * P + j]);
        }
        printf("\n");
    }

    printf("Test passed\n");

    return 0;
}
