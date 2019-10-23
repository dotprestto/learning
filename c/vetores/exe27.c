#include <stdio.h>

void ler_vetor(int *vet, int *nvet) {
    int n = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &vet[i]);
    *nvet = n;
}

void remove_pos(int *vet, int *nvet, int pos) {
    *nvet -= 1;
    for (int i = pos; i < *nvet; i++)
        vet[i] = vet[i + 1];
}

void show(int *vet, int nvet) {
    for (int i = 0; i < nvet; i++)
        printf("%d ", vet[i]);
    printf("\n");
}

void analisa_par(int *vet, int *nvet) {
    int npares = *nvet / 2;
    for (int i = 0; i < *nvet; i += 2) {
        // show(vet, *nvet);
        printf("%d --- ", *nvet);
        printf("par 1 %d e %d\n", vet[i], vet[i + 1]);
        printf("par 2 %d e %d\n", vet[i + 2], vet[i + 3]);
        if (vet[i] >= vet[i + 1])
            remove_pos(vet, nvet, i + 1);
        else
            remove_pos(vet, nvet, i);
        if (vet[i + 2] <= vet[i + 3])
            remove_pos(vet, nvet, i + 3);
        else
            remove_pos(vet, nvet, i + 2);
    }
}

int main() {
    int vet[100], nvet;

    ler_vetor(vet, &nvet);
    // while (nvet != 1)
    analisa_par(vet, &nvet);
    show(vet, nvet);
    return 0;
}
