#include <stdio.h>

typedef struct notas {
    float v[100];
    int n_notas;
} TVETOR;

typedef struct aluno {
    char nome[100];
    TVETOR notas;
    float media;
} TALUNO;

void ler_vet(float *vet, int n_notas) {
    for (int i = 0; i < n_notas; i++, vet++)
        scanf("%f", *vet);
}

int get_dados(TALUNO *aluno, int n_notas) {
    if (scanf("%[^\n]", aluno->nome) == EOF) return -1;

    ler_vet(aluno->notas.v, n_notas);
    aluno->notas.n_notas = n_notas;

    scanf("%*c");
    return 0;
}

void load(TALUNO *aluno, int *n_alunos) {
    int n, i;
    scanf("%d%*c", &n);
    for (i = 0; get_dados(&aluno[i], n) != EOF; i++)
        ;
    *n_alunos = i;
}

float avg(float *v, int n) {
    int soma = 0;
    for (int j = 0; j < n; j++)
        soma += v[j];

    return soma / n;
}

void calc(TALUNO *aluno, int n_alunos) {
    for (int i = 0; i < n_alunos; i++, aluno++)
        aluno->media = avg(aluno->notas.v, aluno->notas.n_notas);
}

void print_notas(float *v, int n) {
    for (int i = 0; i < n; i++, v++)
        printf("%7.2f", *v);
}

void relat(TALUNO *aluno, int n_alunos) {
    for (int i = 0; i < n_alunos; i++, aluno++) {
        printf("%-15s", aluno->nome);
        print_notas(aluno->notas.v, aluno->notas.n_notas);
        printf("%7.2f", aluno->media);
        printf("\n");
    }
}

int main() {
    TALUNO aluno[100];
    int n_alunos;

    load(aluno, &n_alunos);
    calc(aluno, n_alunos);
    relat(aluno, n_alunos);

    return 0;
}
