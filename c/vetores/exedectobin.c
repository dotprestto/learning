#include <stdio.h>

int num_digits(int num_dec, int base) {
    int num_digitos;
    for (num_digitos = 0; num_dec; num_digitos++, num_dec /= base)
        ;

    return num_digitos;
}

void tobin(char num_bin[], int num_dec) {
    int tamanho = num_digits(num_dec, 2);
    num_bin[tamanho--] = '\0';

    for (int posicao = tamanho; num_dec; posicao--, num_dec /= 2)
        num_bin[posicao] = '0' + num_dec % 2;
}

int main() {
    int num_dec;
    char num_bin[100];

    scanf("%d", &num_dec);
    while (num_dec) {
        tobin(num_bin, num_dec);
        printf("%d (dec) -> %s (bin)\n", num_dec, num_bin);
        scanf("%d", &num_dec);
    }

    return 0;
}