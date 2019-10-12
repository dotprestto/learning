#include <stdio.h>
#include <math.h>

double torad(double x) {
    return (x * M_PI) / 180;
}

double seno(double x) {
    x = fmod(x, 2 * M_PI);
    return x - pow(x, 3) / (3 * 2)
           + pow(x, 5) / (5 * 4 * 3 * 2)
           - pow(x, 7) / (7 * 6 * 5 * 4 * 3 * 2)
           + pow(x, 9) / (9 * 8 * 7 * 6 * 5 * 4 * 3 * 2);
}

int main() {

    double y, x;

    scanf("%lf", &x);

    y = seno(torad(x));
z(x);
    printf("seno(%03.0lf) = %.18lf\n", x, y);

    printf("sin(%03.0lf) = %.18lf", x, sin(torad(x)));
    return 0;
}