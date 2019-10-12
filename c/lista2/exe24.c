#include <stdio.h>

int ordernar_num(int n) {
    int temp, digit, newnum = 0;
    for (digit = 0; digit < 9; digit++)
        for (temp = n; temp > 0; temp /= 10)
            if (temp % 10 == digit) {
                newnum *= 10;
                newnum += digit;
            }

    return newnum;
}
int main() {
    int a, b, casos;

    scanf("%d", &casos);

    for (int i = 0; i < casos; i++) {
        scanf("%d %d", &a, &b);

        if (ordernar_num(a) == ordernar_num(b))
            printf("%d é permutacao de %d\n", b, a);
        else
            printf("%d nao é permutacao de %d\n", b, a);
    }
    return 0;
}