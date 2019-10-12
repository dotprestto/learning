#include <stdio.h>

int is_bissexto(int ano) {
    return (ano % 4 == 0) && ((ano % 100 != 0) || (ano % 400 == 0));
}

int main() {
    int ano;

    printf("Entre com um ano:\n");
    scanf("%d", &ano);

    printf("%d", is_bissexto(ano));
    return 0;
}