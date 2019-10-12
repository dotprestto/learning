#include <stdio.h>

void verify(char c, int *n_dig, int *n_mai, int *n_min) {
    if (c >= 'A' && c <= 'Z')
        *n_mai += 1;
    else if (c >= 'a' && c <= 'z')
        *n_min += 1;
    else if (c >= '0' && c <= '9')
        *n_dig += 1;
}

int main() {
    int n_dig = 0, n_mai = 0, n_min = 0;
    char c = ' ';

    while (c != '.') {
        scanf("%c", &c);
        if (c != '.') verify(c, &n_dig, &n_mai, &n_min);
    }
    printf("%d maiusculas\n%d minusculas\n%d digitos", n_mai, n_min, n_dig);
    return 0;
}