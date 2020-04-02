#include <stdio.h>

// arquivo é uma sequênca de bytes
// armazenado em um meio persistente

// Nome -> string
//    -> identificação completa:
//        unidade_armazenamento:/caminho_pastas/nome.extensao

// Classificacao: arquivo texto e binário

int main() {
    float x;
    FILE *fpr, *fpw;

    if ((fpr = fopen("dados-index.txt", "r")) == NULL) {
        printf("erro");
        return 0;
    }
    for (int i = 0; fscanf(fpr, "%f", &x) != EOF; i++)
        printf("%f ", x);
    fclose(fpr);

    return 0;
}