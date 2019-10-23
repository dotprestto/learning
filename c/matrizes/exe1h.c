#include <stdio.h>
#define TAMANHO_VETOR(x) (sizeof(x) / sizeof((x)[0]))

void show(int mat[][100], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }
}

void monta_matriz(int mat[][100], int n) {
    int k = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            if (i == j) {
                mat[i][j] = k;
                k++;
            }
    }
}

int main() {
    int mat[100][100], n = 5;

    monta_matriz(mat, n);
    show(mat, n);
}