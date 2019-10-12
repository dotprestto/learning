#include <stdio.h>

int verify(int a, int b) {
    for (b; b > 0; b /= 10) {
        if ((b % 10) != (a % 10))
            return 0;
        a /= 10;
    }
    return 1;
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