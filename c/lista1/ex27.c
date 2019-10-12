#include <stdio.h>
#include <math.h>


double z(double x) {
    return 1 + (
            (1 / x) * (1 + (
                    (1 / x) * (1 +
                               (1 / x) * (1 +
                                          (1 / x))))));
}

double w(double x, double y) {
    return (x / y) - (
            (x + pow((x / y), 2))
            / (x - pow((x / y), 2))
    );
}

int main() {
    double x, y;

    printf("Entre com x e y\n");
    scanf("%lf %lf", &x, &y);

    printf("Z = %.3lf\nW = %.3lf\n", z(x), w(x, y));
    return 0;
}

