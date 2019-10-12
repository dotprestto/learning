#include <stdio.h>

int main() {

    int p1, qp1, p2, qp2;
    float vp1, vp2, total;

    scanf("%d %d %f\n%d %d %f", &p1, &qp1, &vp1, &p2, &qp2, &vp2);
    total = (qp1 * vp1) + (qp2 * vp2);

    printf("VALOR A PAGAR: R$ %.2f", total);


    return 0;
}