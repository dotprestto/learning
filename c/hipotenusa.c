#include <stdio.h>
#include <math.h>

int main() {
    float co, ca, hip;

    printf("entre com o cateto oposto e em seguida o cateto adjacente: ");
    scanf("%f", &co);
    scanf("%f", &ca);

    hip = sqrt((pow(co, 2) + pow(ca, 2)));
    printf("A hipotenusa é: %f", hip);

    return 0;
}