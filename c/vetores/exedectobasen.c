#include <ctype.h>
#include <stdio.h>

void loaddigitos(char digitos[]) {
    int i;
    for (i = 0; i < 10; i++) {
        digitos[i] = '0' + i;
    }
    for (i; i < 36; i++) {
        digitos[i] = 'A' + i;
    }
}

int igual(char str[], char str2[]) {
    int i = 0;
    for (i; str[i]; i++) {
        if (str[i] != str2[i])
            return 0;
    }
    return str[i] == str2[i];
}
int valor_simbolo(char c) {
    if (isdigit(c)) {
        return c - '0';
    } else if (islower(c)) {
        return 10 + c - 'a';
    } else if (isupper(c)) {
        return 10 + c - 'A';
    }
}

//contar tamanho do vetor
int toint(char str[], int base) {
    int i = 0, total = 0;
    for (i; str[i]; i++)
        total = total * base + valor_simbolo(str[i]);

    return total;
}

int main() {
    int base, x;
    char str[100], num_basen[100], digitos[36];

    loaddigitos(digitos);

    scanf("%d", &base);
    fflush(stdin);
    gets(str);

    while (!igual(str, "fim")) {
        x = toint(str, base);
        // tobasen(num_basen, str, base, digitos);
        printf("%s (dec) -> %s (bin)\n", str, num_basen);
        gets(str);
    }

    return 0;
}