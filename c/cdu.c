#include <stdio.h>

int main() {
    int n, c, d, u;

    printf("Entre com o valor de n entre 100 e 999: ");
    scanf("%d", &n);

    c = n / 100;
    d = (n - (c * 100)) / 10;
    u = n - (c * 100 + d * 10);

    printf("%d centena(s), %d dezena(s), %d unidade(s)a", c, d, u);

    return 0;
}