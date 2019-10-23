#include <stdio.h>
#define MAXL 100
#define MAXC 100
#define SKIP printf("\n")
void ler(int M[][MAXC], int *L, int *C) {
    int i, j, r, f;
    r = 1;
    scanf("%d%d", L, C);
    SKIP;
    for (j = 0; j < *C; j++) {
        for (i = 0; i < *L; i++) {
            if (i >= j) {
                M[i][j] = r;
                r = r + *L - f++;
            }
        }
        r = j + 2;
        f = 0;
    }
}
void show(int M[][MAXC], int L, int C) {
    int i, j;
    for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++) {
            printf("%4d", M[i][j]);
        }
        SKIP;
    }
}
int main() {
    int mat[MAXL][MAXC];
    int nl, nc;
    ler(mat, &nl, &nc);
    show(mat, nl, nc);
    return 0;
}
