#include <stdio.h>
#define MAXL 100
#define MAXC 100

void ler_matriz(int mat[][MAXC], int *lin, int *col) {
    int l, c;

    scanf("%d\n", &l);
    scanf("%d\n", &c);

    for (int i = 0; i < l; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &mat[i][j]);

    *lin = l;
    *col = c;
}

void max(int *k, int *klin, int *kcol, int mat[][MAXC], int lin, int col) {
    *k = 0;
    for (int i = 0; i < lin; i++)
        for (int j = 0; j < col; j++) {
            if (mat[i][j] > *k) {
                *k = mat[i][j];
                *klin = i;
                *kcol = j;
            }
        }
}

int main() {
    int mat[MAXL][MAXC], lin, col;
    int k, klin, kcol;

    ler_matriz(mat, &lin, &col);
    max(&k, &klin, &kcol, mat, lin, col);
    printf("(%d, %d) = %d", klin, kcol, k);
    return 0;
}