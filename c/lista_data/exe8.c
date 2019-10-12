#include <stdio.h>

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
// ** minha resolucao
// dias corridos da data 1/1/ano
// ** minha resolucao
int dias_corridos(int dia, int mes, int ano) {
    int total_dias = 0;
    if (mes == 1) return total_dias;
    for (int atual = 1; atual < mes; atual++) {
        total_dias += ultimo_dia_mes(atual, ano);
    }
    return total_dias + dia;
}

// ** minha resolucao

int dias_primeira_data(int dia, int mes, int ano) {
    return 365 + leap(ano) - dias_corridos(dia, mes, ano);
}
// ** minha resolucao

int dias_entre_anos(int ano, int ano2) {
    return (ano2 - (ano + 1)) * (365 + 1 / 4 + 1 / 100 + 1 / 400);
}

int total_dias(int dia, int mes, int ano, int dia2, int mes2, int ano2) {
    printf("dias primeira data %d\n", dias_primeira_data(dia, mes, ano));
    printf("dias corridos %d\n", dias_corridos(dia2, mes2, ano2));
    printf("dias entre anos %d\n", dias_entre_anos(ano, ano2));
    return dias_primeira_data(dia, mes, ano) + dias_corridos(dia2, mes2, ano2) + dias_entre_anos(ano, ano2);
}

//outra resolução - contar os dias para cada data desde 1/1/1 e fazer a diferença
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

int diferenca_dias(int dia, int mes, int ano, int dia2, int mes2, int ano2) {
    int primeira_data = 0, segunda_data = 0;
    primeira_data = dias_inicio(dia, mes, ano);
    segunda_data = dias_inicio(dia2, mes2, ano2);
    if (primeira_data > segunda_data)
        return primeira_data - segunda_data;
    else
        return segunda_data - primeira_data;
}
int main() {
    int dia, mes, ano, dia2, mes2, ano2;

    scanf("%d %d %d %d %d %d", &dia, &mes, &ano, &dia2, &mes2, &ano2);

    // if (ano <= ano2)
    //     printf("%d\n", total_dias(dia, mes, ano, dia2, mes2, ano2));
    printf("%d\n", diferenca_dias(dia, mes, ano, dia2, mes2, ano2));

    return 0;
}
