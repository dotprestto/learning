#include <ctype.h>
#include <stdio.h>
#include <string.h>

void ler_strings(char str[][100], int *nstrings) {
    int n = 0;
    char aux[100];
    gets(aux);
    while (strcmp(aux, "fim")) {
        strcpy(str[n], aux);
        n++;
        gets(aux);
    }
    *nstrings = n;
}

void remove_pos(char *str) {
    for (str; *str; str++) {
        *str = *(str + 1);
    }
}

void ltrim(char str[][100], int nstrings) {
    for (int i = 0; i < nstrings; i++) {
        for (int j = 0; str[i][j]; j++)
            if (isspace(str[i][j])) {
                remove_pos(&str[i][j]);
                j--;
            } else
                break;
    }
}

void show(char str[][100], int nstrings) {
    for (int i = 0; i < nstrings; i++)
        printf("%s\n", str[i]);
}

int main() {
    char str[100][100];
    int nstrings;

    ler_strings(str, &nstrings);
    ltrim(str, nstrings);
    printf("\n");
    show(str, nstrings);
}