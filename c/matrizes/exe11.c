#include <stdio.h>
#define MAXC 100
#define MAXL 100

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

int *mattovet(int *v, int *n, int mat[][MAXC], int lin, int col) {
    *n = lin * col;
    int t = 0;

    for (int i = 0; i < lin; i++)
        for (int j = 0; j < col; j++, v++)
            *v = mat[i][j];
    return v;
}
void show(int *v, int nvet) {
    for (int i = 0; i < nvet; i++)
        printf("%d ", v[i]);
}
int main() {
    int mat[MAXL][MAXC], lin, col, vet[MAXC * MAXL], nvet;
    ler_matriz(mat, &lin, &col);
    mattovet(vet, &nvet, mat, lin, col);
    show(vet, nvet);
    return 0;
}