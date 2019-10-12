#include <stdio.h>

int main() {

    int n, a, m, d;

    scanf("%d", &n);

    a = n / 365; //800/365
    m = n / 30 - (a * 12); //800/30 - (2 * 12)
    d = n - (m / 30) - (a * 365); // 800 - (2 * 30) - (2 * 365)

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", a, m, d);
    return 0;
}