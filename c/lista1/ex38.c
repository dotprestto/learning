#include <stdio.h>

int n_pares(x, y, z) {
    int npares = !(x % 2); // 230 % 2 -> 0
    npares += !(y % 2); // 185 % 2 -> 1
    npares += !(z % 2); // 16 % 2 -> 0
    return npares;
}

int main() {
    int x, y, z;

    printf("Entre com 3 números inteiros:\n");
    scanf("%d %d %d", &x, &y, &z);

    printf("%d", n_pares(x, y, z));
    return 0;
}