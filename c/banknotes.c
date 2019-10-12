#include <stdio.h>

int main() {

    int n, ncem, ncin, nvin, ndez, ncinco, ndois, num;

    scanf("%d", &n);
    ncem = n / 100;
    ncin = (n - (ncem * 100)) / 50;
    nvin = (n - (ncem * 100 + ncin * 50)) / 20;
    ndez = (n - (ncem * 100 + ncin * 50 + nvin * 20)) / 10;
    ncinco = (n - (ncem * 100 + ncin * 50 + nvin * 20 + ndez * 10)) / 5;
    ndois = (n - (ncem * 100 + ncin * 50 + nvin * 20 + ndez * 10 + ncinco * 5)) / 2;
    num = (n - (ncem * 100 + ncin * 50 + nvin * 20 + ndez * 10 + ncinco * 5 + ndois * 2));

    printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n"
           "%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n"
           "%d nota(s) de R$ 1,00\n", n, ncem, ncin, nvin, ndez, ncinco, ndois, num);
    return 0;
}