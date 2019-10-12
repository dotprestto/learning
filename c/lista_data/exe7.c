#include <stdio.h>

#include <stdio.h>

int leap(int ano) {
    return ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0);
}

int last_day(int mes, int ano) {
    if (mes == 2) {
        return leap(ano) ? 29 : 28;
    } else if (mes <= 7 && (mes % 2 != 0) || (mes % 2 == 0 && mes > 7))
        return 31;
    else
        return 30;
}

int current_year(int dia, int mes, int ano) {
    int total_dias = 0;
    if (mes == 1) return total_dias;
    for (int atual = 1; atual < mes; atual++) {
        total_dias += last_day(atual, ano);
    }
    return total_dias + dia;
}

int days_in_set(int ano) {
    printf("ano %d\n", ano);
    return (ano - 1600) * (365 + 1 / 4 + 1 / 100 + 1 / 400);
}

int total_days(int dia, int mes, int ano) {
    return current_year(dia, mes, ano) + days_in_set(ano);
}
int main() {
    int dia, mes, ano;

    scanf("%d %d %d", &dia, &mes, &ano);
    printf("%d\n", total_days(dia, mes, ano));

    return 0;
}
