#include <stdio.h>

int invert(int n) {
    int invert = 0;
    while (n > 0) {
        invert = invert * 10 + (n % 10);
        n /= 10;
    }
    return invert;
}

int supernext(int n) {
    int newnum = 0;

    while (n > 0) {
        int digito = n % 10;

        newnum *= 10;
        if (digito != 1 && digito != 0)
            newnum += (digito - 1);
        else if (digito == 0) {
            digito = 9;
            newnum += digito;
        }

        n /= 10;
    }
    newnum = invert(newnum);
    return newnum;
}

int main() {
    int n = 0;

    while (n != -1) {
        scanf("%d", &n);
        if (n != -1)
            printf("%d\n", supernext(n));
    }
    return 0;
}