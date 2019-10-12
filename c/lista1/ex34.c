#include <stdio.h>

int faixa(float n) {

    int faixa = n < -1 ? 1 : 0;
    faixa = (n < 0 && n > -1) ? 2 : faixa;
    faixa = (n < 1 && n > 0) ? 3 : faixa;
    faixa = n > 1 ? 4 : faixa;

    return faixa;

}

int main() {
    float n;

    printf("Entre com um número\n");
    scanf("%f", &n);

    printf("Faixa = %d", faixa(n));
    return 0;
}