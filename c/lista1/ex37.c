#include <stdio.h>

int is_bissexto(int ano) {
    return (ano % 4 == 0) && ((ano % 100 != 0) || (ano % 400 == 0));
}

int calculadias(int mes, int ano) {
    int dias = (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) ? 31 : 30;
    return mes == 2 ? 28 + is_bissexto(ano) : dias;
}

int main() {
    int ano, mes;

    printf("Entre com um mês e um ano:\n");
    scanf("%d%d", &mes, &ano);

    printf("%d", calculadias(mes, ano));

    return 0;
}