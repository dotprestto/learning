#include <stdio.h>

int leap(int ano) {
    return ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0);
}

int ultimo_dia_mes(int mes, int ano) {
    if (mes == 2) {
        return leap(ano) ? 29 : 28;
    } else if (mes <= 7 && (mes % 2 != 0) || (mes % 2 == 0 && mes > 7))
        return 31;
    else
        return 30;
}

// dias corridos da data 1/1/ano
int dias_corridos(int dia, int mes, int ano) {
    int total_dias = 0;
    if (mes == 1) return total_dias;
    for (int atual = 1; atual < mes; atual++) {
        total_dias += ultimo_dia_mes(atual, ano);
    }
    return total_dias + dia;
}

// conta quantos anos bissextos entre 1/1/1 até a data do argumento
int conta_bissextos(int ano) {
    return (ano / 4) - (ano / 100) + (ano / 400);
}

// dias de 1/1/1 até a data atual
int dias_inicio(int dia, int mes, int ano) {
    int total_dias = 0;
    total_dias += (ano - 1) * 365;
    total_dias += dias_corridos(dia, mes, ano);
    total_dias += conta_bissextos(ano - 1);

    return total_dias;
}
int soma_dias(int dia, int mes, int ano, int dias_ad) {
    return dias_inicio(dia, mes, ano) + dias_ad;
}

//retorna a data a partir de um número de dias partindo de 1/1/1
int getDate(int dias, int *dia, int *mes, int *ano) {
    *ano = (dias / 365);
    *mes = (dias / 365) / 12;
    *dia = (dias % 365) % 30;
}

int main() {
    int dia, mes, ano, dias_ad;

    scanf("%d %d %d %d", &dia, &mes, &ano, &dias_ad);
    int total_dias = soma_dias(dia, mes, ano, dias_ad);
    getDate(total_dias, &dia, &mes, &ano);
    printf("%d %d %d\n", dia, mes, ano);

    return 0;
}
