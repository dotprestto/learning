#include <stdio.h>

int invert(int n) {
    int invert = 0;
    while (n > 0) {
        invert = invert * 10 + (n % 10);
        n /= 10;
    }
    return invert;
}
void decrypt(int n) {
    if (n == 0) printf("A");
    int inverted = invert(n);
    while (inverted > 0) {
        int digito = inverted % 10;
        printf("%c", 65 + digito);
        inverted /= 10;
    }
    printf("\n");
}

int main() {
    int n = 0;

    while (n != -1) {
        scanf("%d", &n);
        printf("%d", n);

        if (n != -1) decrypt(n);
    }
    return 0;
}