#include <stdio.h>
#include <string.h>
#define MAXL 100
#define MAXC 80
#define MAXN 10

void ler(char ALUNOS[][MAXC], float NOTAS[][MAXN], int *L, int *C) {
    int i, j;
    char str[MAXC];
    scanf("%d%*c", C);
    scanf("%[^;]%*c", str);
    for (i = 0; strcmp(str, "fim") != 0; i++) {
        strcpy(ALUNOS[i], str);
        for (j = 0; j < *C; j++) {
            scanf("%f", &NOTAS[i][j]);
        }
        scanf("%*c");
        scanf("%[^;]%*c", str);
    }
    *L = i;
}

void notas_media(float NOTAS[][MAXN], int L, int C, float NOTAS_AL[]) {
    int i, j;
    float T;
    for (i = 0; i < L; i++) {
        for (j = T = 0; j < C; j++) {
            T += NOTAS[i][j];
        }
        NOTAS_AL[i] = T / C;
    }
}

void notas_bimes(float NOTAS[][MAXN], int L, int C, float NOTAS_BIM[]) {
    int i, j;
    float T;
    for (j = 0; j < C; j++) {
        for (i = T = 0; i < L; i++) {
            T += NOTAS[i][j];
        }
        NOTAS_BIM[j] = T / L;
    }
}

void relatorio(char ALUNOS[][MAXC], float NOTAS[][MAXN], int L, int C, float NOTA_AL[], float NOTA_BIM[]) {
    int i, j;
    for (i = 0; i < L; i++) {
        printf("%-20s", ALUNOS[i]);
        for (j = 0; j < C; j++) {
            printf("%5.1f", NOTAS[i][j]);
        }
        printf("%5.1f\n", NOTA_AL[i]);
    }
}

int main() {
    char alunos[MAXL][MAXC];
    float notas[MAXL][MAXN], nota_al[100], nota_bim[100];
    int nl, nc;
    ler(alunos, notas, &nl, &nc);
    notas_media(notas, nl, nc, nota_al);
    notas_bimes(notas, nl, nc, nota_bim);
    relatorio(alunos, notas, nl, nc, nota_al, nota_bim);
    return 0;
}