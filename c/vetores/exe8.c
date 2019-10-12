#include <stdio.h>

void ler(int vetor[], int *posicao) {
    int i, n;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }
    *posicao = n;
}

void show(int vetor[], int nvetor) {
    int i;
    for (i = 0; i < nvetor; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

void bubble_sort(int vetor[], int nvetor) {
    int i, j, aux;
    for (i = 1; i < nvetor; i++) {
        for (j = 0; j < (nvetor - 1); j++) {
            if (vetor[j] < vetor[j + 1]) {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
}

int main() {
    int vetor[100], nvetor;

    ler(vetor, &nvetor);
    bubble_sort(vetor, nvetor);
    show(vetor, nvetor);

    return 0;
}