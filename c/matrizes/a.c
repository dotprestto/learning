#include <stdio.h>
#define MAXL 100
#define MAXC 100
#define SKIP printf("\n");
void ler(int M[][MAXC], int *L, int *C) {
    int i, j;
    scanf("%d%d", L, C);
    SKIP if (*L != *C) return;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            M[0][j] = 1;
            M[i][0] = 1;
            M[i][5 - 1] = 1;
            M[5 - 1][j] = 1;
            M[3][3] = 3;
            if (M[i][j] == 0)
                M[i][j] = 2;
        }
    }
}
void show(int M[][MAXC], int L, int C) {
    int i, j;
    if (L != C) {
        printf(" Matriz quadrada necessaria \n");
        return;
    }
    for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++) {
            printf("%d", M[i][j]);
        }
        SKIP
    }
}
int main() {
    int mat[MAXL][MAXC];
    int nl, nc;
    ler(mat, &nl, &nc);
    show(mat, nl, nc);
    return 0;
}
