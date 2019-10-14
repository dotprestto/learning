#include <stdio.h>

void ler_vetor(int vet[], int *nvet) {
    int n = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &vet[i]);
    }
    *nvet = n;
}

void interpolate(int vfinal[], int *nfinal, int va[], int na, int vb[], int nb) {
    *nfinal = na + nb;
    int i, j;
    for (i = 0, j = 0; i < na; i++, j += 2) {
        vfinal[j] = va[i];
    }
    for (i = 0, j = 1; i < nb; i++, j += 2) {
        vfinal[j] = vb[i];
    }

    if (na > nb)
        for (i = (nb * 2), j = (na - nb + 1); i < *nfinal; i++, j++)
            vfinal[i] = va[j];
    else if (nb > na)
        for (i = (na * 2), j = (nb - na + 1); i < *nfinal; i++, j++)
            vfinal[i] = vb[j];
    printf("\n");
}

void show(int vet[], int nv) {
    for (int i = 0; i < nv; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");
}
int main() {
    int va[100], na;
    int vb[100], nb;
    int vfinal[1000], nfinal;

    ler_vetor(va, &na);
    show(va, na);
    ler_vetor(vb, &nb);
    show(vb, nb);
    interpolate(vfinal, &nfinal, va, na, vb, nb);
    show(vfinal, nfinal);

    return 0;
}