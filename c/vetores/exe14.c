#include <stdio.h>
void load(int v[], int tamanho) {
    for (int i = 0; i < tamanho; i++)
        scanf("%d", &v[i]);
}

int somatorio(int va[], int vb[], int tamanho) {
    int somatorio = 0;
    for (int i = 0; i < tamanho; i++)
        somatorio += (va[i] * vb[i]);
    return somatorio;
}

int main() {
    int va[100], vb[100], tamanho;
    scanf("%d", &tamanho);
    load(va, tamanho);
    load(vb, tamanho);

    printf("%d\n", somatorio(va, vb, tamanho));
}