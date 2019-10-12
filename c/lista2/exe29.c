#include <stdio.h>

int verify(int a, int b) {
    int power = 1;
    for (int temp = b; temp > 0; temp /= 10) {
        if (temp % 10 != 0) power *= 10;
    }

    for (a; a > 0; a /= 10) {
        if (b == (a % power)) return 1;
    }
    return 0;
}

int main() {
    int a, b, casos;

    scanf("%d", &casos);
    for (int i = 0; i < casos; i++) {
        scanf("%d %d", &a, &b);
        if (verify(a, b))
            printf("encaixa\n");
        else
            printf("nao encaixa\n");
    }
}