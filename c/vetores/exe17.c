#include <stdio.h>

void ler_vetor(int vet[], int *nvet) {
    int n = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &vet[i]);
    }
    *nvet = n;
}

void vetb_veta(int vetfinal[], int *nfinal, int va[], int na, int vb[], int nb) {
    *nfinal = na + nb;
    int i = 0;
    for (i; i < nb; i++)
        vetfinal[i] = vb[i];
    for (i = 0; i < na; i++)
        vetfinal[i + nb] = va[i];
}

void show(int vet[], int nv) {
    for (int i = 0; i < nv; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");
}

int main() {
    int va[100], vb[100], na, nb;
    int vetfinal[100], nfinal;

    ler_vetor(va, &na);
    ler_vetor(vb, &nb);
    vetb_veta(vetfinal, &nfinal, va, na, vb, nb);
    show(vetfinal, nfinal);
    return 0;
}