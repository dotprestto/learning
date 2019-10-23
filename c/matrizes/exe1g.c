#include <stdio.h>

void show(int mat[][100], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }
}

void monta_matriz(int mat[][100], int n) {
    int k = 1, distancia_borda = n % 2 == 0 ? n / 2 : n / 2 + 1;
    int tempn = n;
    for (k; k < distancia_borda; k++)
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++)
                if (i == j)
                    mat[i][j] = distancia_borda;
                else if (i < distancia_borda - k && j < distancia_borda)
                    mat[i][j] = k;
        }
}

int main() {
    int mat[100][100], n = 5;
    monta_matriz(mat, n);
    show(mat, n);
    return 0;
}