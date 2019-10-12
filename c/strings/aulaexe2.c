#include <stdio.h>
#include <string.h>
void ordenar(char str[]) {
    char aux;
    int n = strlen(str);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < (n - i - 1); j++)
            if (str[j] > str[j + 1]) {
                aux = str[j];
                str[j] = str[j + 1];
                str[j + 1] = aux;
            }
    }
}

int main() {
    char str[100];
    gets(str);

    while (strcmp(str, "fim")) {
        ordenar(str);
        printf("[%s]\n", str);
        gets(str);
    }
}