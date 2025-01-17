#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void setZeroes(int** matrix, int matrixSize, int* matrixColSize) {
    int row[matrixSize];
    int col[*matrixColSize];

    memset(row, 0, sizeof(row));
    memset(col, 0, sizeof(col));

    for (int i = 0; i < matrixSize; i++) {
        for (int j = 0; j < *matrixColSize; j++) {
            if (matrix[i][j] == 0) {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    for (int i = 0; i < matrixSize; i++) {
        if (row[i]) {
            for (int j = 0; j < *matrixColSize; j++) {
                matrix[i][j] = 0;
            }
        }
    }

    for (int j = 0; j < *matrixColSize; j++) {
        if (col[j]) {
            for (int i = 0; i < matrixSize; i++) {
                matrix[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < matrixSize; i++) {
        for (int j = 0; j < *matrixColSize; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrixSize = 3;
    int matrixColSize = 3;

    int** matrix = (int**)malloc(matrixSize * sizeof(int*));
    for (int i = 0; i < matrixSize; i++) {
        matrix[i] = (int*)malloc(matrixColSize * sizeof(int));
    }

    int input[3][3] = {
        {1, 1, 1},
        {1, 0, 1},
        {1, 1, 1}
    };

    for (int i = 0; i < matrixSize; i++) {
        for (int j = 0; j < matrixColSize; j++) {
            matrix[i][j] = input[i][j];
        }
    }

    setZeroes(matrix, matrixSize, &matrixColSize);

    for (int i = 0; i < matrixSize; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}
