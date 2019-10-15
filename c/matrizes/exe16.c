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

void ler_vetor(int *v, int *nvet) {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &v[i]);
}

int validate(int *v, int nvet, int mat[][MAXC], int lin, int col, int l, int c) {
    int validate = 0, t;
    printf("validando");
    for (int i = l; i < lin; i++)
        for (int j = c, t = 0; j < col, t < nvet; j++, t++)
            if (v[t] != mat[l][j]) {
                validate = 0;
                break;
            }
    return validate;
}

int find_vet_in_matrix(int *v, int nvet, int mat[][MAXC], int lin, int col) {
    int found = 0;
    for (int i = 0; i < lin; i++)
        for (int j = 0; j < col; j++) {
            if (v[0] == mat[i][j])
                found = validate(v, nvet, mat, lin, col, i, j);
            if (found == 1) break;
        }
    return !found;
}

int main() {
    int mat[MAXL][MAXC], lin, col;
    int v[MAXC * MAXL], nvet;

    ler_matriz(mat, &lin, &col);
    ler_vetor(v, &nvet);

    if (!find_vet_in_matrix(v, nvet, mat, lin, col))
        printf("Vetor está na matriz");
    else
        printf("Vetor não está na matriz");

    return 0;
}