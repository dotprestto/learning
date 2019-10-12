#include <stdio.h>
#include <math.h>

double m_aritmetica(int x1, int x2, int x3, int x4) {
    return (x1 + x2 + x3 + x4) / 4.0;
}

double m_geometrica(int x1, int x2, int x3, int x4) {
    return pow((x1 * x2 * x3 * x4), (1.0 / 4));
}

double m_harmonica(int x1, int x2, int x3, int x4) {
    return 1 / (1.0 / x1 + 1.0 / x2 + 1.0 / x3 + 1.0 / x4);
}

int main() {
    int x1, x2, x3, x4;

    printf("Entre com 4 notas:\n");
    scanf("%d%d%d%d", &x1, &x2, &x3, &x4);

    printf("A média aritmética é: %.3lf\n", m_aritmetica(x1, x2, x3, x4));
    printf("A média geométrica é: %.3lf\n", m_geometrica(x1, x2, x3, x4));
    printf("A média harmônica é: %.3lf\n", m_harmonica(x1, x2, x3, x4));

    return 0;
}