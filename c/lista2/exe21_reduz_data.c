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

void previous_day(int *dia, int *mes, int *ano) {
    // int aux = *mes;
    if (*dia == 1 && *mes == 1) {
        *ano -= 1;
        *mes = 12;
        *dia = 31;

    } else if (*dia == 1) {
        *mes -= 1;
        *dia = max_mes(*mes, *ano);
    } else
        *dia -= 1;
    // if (aux != *mes)
    //     *dia = 0;
}

void skip_days(int *dia, int *mes, int *ano, int dias_red) {
    for (int i = 0; i < dias_red; i++)
        previous_day(dia, mes, ano);
}

int main() {
    int num_casos, dia, mes, ano, dias_red, aux;
    scanf("%d", &num_casos);

    for (int i = 0; i < num_casos; i++) {
        scanf("%d %d %d", &dia, &mes, &ano);
        scanf("%d", &dias_red);

        skip_days(&dia, &mes, &ano, dias_red);
        printf("%d %d %d\n", dia, mes, ano);
    }

    return 0;
}