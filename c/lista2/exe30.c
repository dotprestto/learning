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

int count_month_days(int mes, int ano) {
    int total_dias = 0;
    if (mes == 1) return total_dias;
    for (int atual = 1; atual < mes; atual++) {
        total_dias += last_day(atual, ano);
    }
    return total_dias;
}
int main() {
    int casos, dia, mes, ano;
    scanf("%d", &casos);

    for (int i = 0; i < casos; i++) {
        scanf("%d %d %d", &dia, &mes, &ano);
        printf("%d\n", count_month_days(mes, ano) + dia);
    }
    return 0;
}