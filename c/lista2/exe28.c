#include <stdio.h>

int invert(int n) {
    int invert = 0, fator = 10;
    while (n > 0) {
        invert = invert*10+ (n % 10);
        n /= 10;
    }
    return invert;
}

int verify(int n) {
    if (n == invert(n))
        return 1;
    else
        return 0;
}

int main() {
    int casos, n;
    scanf("%d", &casos);

    for (int i = 0; i < casos; i++) {
        scanf("%d", &n);
        if (verify(n))
            printf("sim\n");
        else
            printf("nao\n");
    }
}
