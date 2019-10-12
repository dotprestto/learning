#include <stdio.h>

int getreta(double x1, double y1, double x2,
            double y2, double *ang, double *lin) {
    if (x1 == x2) return 1;
    *ang = (y1 - y2) / (x1 - x2);
    *lin = (x1 * y2 - x2 * y1) / (x1 - x2);
    return 0;
}

int main() {
    double x1, y1, x2, y2, ang, lin;
    printf("Enter com dois pontos\n");
    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);
    printf("EQ da reta:\n");
    if (getreta(x1, y1, x2, y2, &ang, &lin) == 0)
        printf("y = %+.4lfx %+.4lf\n", ang, lin);
    else printf("x = %+.4lf\n", x1);
    return 0;
}