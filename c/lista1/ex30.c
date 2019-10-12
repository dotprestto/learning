#include <stdio.h>
#include <math.h>

int stirling(int n) {
    return sqrt(2 * M_PI * n) * pow((n / M_E), n);
}

int main() {
    int n;
    printf("Entre com um número:\n");

    scanf("%d", &n);

    printf("O fatorial aproximado de %d é = %d\n", n, stirling(n));

    return 0;
}