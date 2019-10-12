#include <stdio.h>


int amanha(int *dia, int *mes, int *ano) {
    if (*dia > max_mes(*mes, *ano) || *dia < 0 || *mes > 12 || *mes < 0) return 0;
    if (*dia == max_mes(*mes, *ano)) {
        *dia = 1;
        if (*mes == 12) {
            *mes = 1;
            *ano += 1;
        } else *mes += 1;
    } else *dia += 1;
    return 1;
}

int max_mes(int mes, int ano) {
    if (mes == 2) {
        return leap(ano) ? 29 : 28;
    } else if ((mes % 2 != 0 && mes <= 7) || (mes % 2 == 0 && mes > 7)) return 31;
    else return 30;
}

int leap(int ano) {
    return ano % 4 == 0 && (ano % 400 == 0 || ano % 100 != 0);
}

int main() {
    int dia, mes, ano;
    scanf("%d %d %d", &dia, &mes, &ano);

    if (amanha(&dia, &mes, &ano) == 0) printf("erro");
    else printf("%d %d %d", dia, mes, ano);

}