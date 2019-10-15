#include <stdio.h>
#define MAXL 100
#define MAXC 100

void ler_matriz(int mat[][MAXC], int *n) {
    int t;

    scanf("%d\n", &t);

    for (int i = 0; i < t; i++)
        for (int j = 0; j < t; j++)
            scanf("%d", &mat[i][j]);

    *n = t;
}

void max(int *k, int *klin, int *kcol, int mat[][MAXC], int n) {
    *k = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            if (mat[i][j] > *k) {
                *k = mat[i][j];
                *klin = i;
                *kcol = j;
            }
        }
}

void printdes(int mat[][MAXC], int *k, int *klin, int *kcol, int n) {
    int i;
    for (i = 0; i < (n * n); i++) {
        max(k, klin, kcol, mat, n);
        printf("%d em (%d, %d)\n", *k, *klin, *kcol);
        mat[*klin][*kcol] = -1;
    }
}

int main() {
    int mat[MAXL][MAXC], n;
    int k, klin, kcol;

    ler_matriz(mat, &n);
    printdes(mat, &k, &klin, &kcol, n);

    return 0;
}