#include <stdio.h>

int leap(int ano) {
    return ano % 4 == 0 && (ano % 400 == 0 || ano % 100 != 0);
}

int max_mes(int mes, int ano) {
    if (mes == 2) {
        return leap(ano) ? 29 : 28;
    } else if ((mes % 2 != 0 && mes <= 7) || (mes % 2 == 0 && mes > 7))
        return 31;
    else
        return 30;
}

void next_day(int *dia, int *mes, int *ano) {
    int aux = *mes;
    *dia += 1;
    *mes += (*dia / max_mes(*mes, *ano));
    if (aux != *mes)
        *dia = 0;
    if (*mes == 13) {
        *ano += 1;
        *mes = 1;
    }
}

void skip_days(int *dia, int *mes, int *ano, int dias_ad) {
    for (int i = 0; i < dias_ad; i++)
        next_day(dia, mes, ano);
}

int main() {
    int num_casos, dia, mes, ano, dias_ad, aux;
    scanf("%d", &num_casos);

    for (int i = 0; i < num_casos; i++) {
        scanf("%d %d %d", &dia, &mes, &ano);
        scanf("%d", &dias_ad);

        skip_days(&dia, &mes, &ano, dias_ad);
        printf("%d %d %d\n", dia, mes, ano);
    }

    return 0;
}