#include <stdio.h>

typedef struct {
    int jogada[10],
        n_acertos, n_numeros;
} APOSTA;

int load(char *arquivo_apostas, APOSTA *apostas, int *qtd_apostas) {
    FILE *fpr;
    int i = 0, j = 0, inteiro;
    char separador;

    if ((fpr = fopen(arquivo_apostas, "r")) == NULL)
        return 0;

    while (fscanf(fpr, "%d%c", &inteiro, &separador) != EOF) {
        if (separador == '\n' || feof(fpr)) {
            apostas[i].jogada[j++] = inteiro;
            apostas[i++].n_numeros = j;
            j = 0;
        } else {
            apostas[i].jogada[j++] = inteiro;
        }
    }
    *qtd_apostas = i;
    fclose(fpr);
}

void contar_acertos(APOSTA *apostas, int qtd_apostas, int *resultado, int n_num) {
    int contador;
    for (int i = 0; i < qtd_apostas; i++) {
        contador = 0;
        for (int j = 0; j < apostas[i].n_numeros; j++)
            for (int k = 0; k < n_num; k++)
                contador += (apostas[i].jogada[j] == resultado[k]);
        apostas[i].n_acertos = contador;
    }
}

int relat(char *arquivo_saida, APOSTA *apostas, int qtd_apostas, int *resultado, int n_num) {
    FILE *fpw;
    if ((fpw = fopen(arquivo_saida, "w")) == NULL) return 0;
    // fprintf(fpw, "RESULTADO = {");
    // for (int i = 0; i < n_num; i++)
    //     fprintf(fpw, "%d", );
    // fprintf(fpw, "}");
    printf("---%d---", apostas[2].n_numeros);
    for (int i = 0; i < qtd_apostas; i++) {
        for (int j = 0; j < apostas[i].n_numeros; j++)
            fprintf(fpw, "%d ", apostas[i].jogada[j]);
        fprintf(fpw, "[%d]\n", apostas[i].n_acertos);
    }
    fclose(fpw);
}

int main() {
    APOSTA apostas[1000];
    int resultado[] = {21, 25, 33, 41, 47, 53}, n_num = 6, qtd_apostas;
    char arquivo_apostas[100] = "dados-megasena.txt",
         arquivo_saida[100] = "saida.txt";

    load(arquivo_apostas, apostas, &qtd_apostas);
    contar_acertos(apostas, qtd_apostas, resultado, n_num);
    relat(arquivo_saida, apostas, qtd_apostas, resultado, n_num);

    for (int i = 0; i < 7; i++)
        printf("%d ", apostas[2].jogada[i]);
    return 0;
}