#include <stdio.h>

int main() {
    int x, y, z, maior;

    printf("Entre com 3 números");
    scanf("%d%d%d", &x, &y, &z);

    maior = x > y ? x : y;
    maior = maior > z ? maior : z;

    printf("O maior é: %d", maior);

    return 0;
}