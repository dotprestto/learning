#include <stdio.h>

int classificador(char c) {
    int class = (c >= 97 && c <= 122) ? 1 : 0;
    class = (c >= 65 && c <= 90) ? 2 : class;
    class = (c >= 49 && c <= 57) ? 3 : class;
    return (class == 0) ? 4 : class;
}

int main() {
    char c;

    printf("Entre com um caractere");
    scanf("%c", &c);

    printf("O caractere é classificado como = %d", classificador(c));

    return 0;
}