#include <stdio.h>
#include <math.h>

int main() {
    int n, a, b;

    scanf("%d", &n);

    a = n % 100; // 71
    b = n / 1000; // 48

    printf("%d", a + (b * 1000));
    return 0;
}