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

void count_month_days(int *dia, int *mes, int *ano, int qtdias) {
    if (qtdias == 31) {
        *mes = 1;
        *dia = qtdias;
    } else {
        int total_dias = 0;
        for (int atual = 1; atual <= 12; atual++) {
            total_dias += last_day(atual, *ano);
            if (total_dias > qtdias) {
                *mes = atual;
                *dia = qtdias - (total_dias - last_day(*mes, *ano));
                break;
            }
        }
    }
}

int main() {
    int casos, dia = 0, mes = 0, ano, qtdias;
    scanf("%d", &casos);

    for (int i = 0; i < casos; i++) {
        scanf("%d %d", &ano, &qtdias);
        count_month_days(&dia, &mes, &ano, qtdias);
        printf("%d %d %d\n", dia, mes, ano);
    }
    return 0;
}