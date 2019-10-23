#include <stdio.h>
void ler_strings(char str[][100], int nstrings) {
    for (int i = 0; i < nstrings; i++) {
        gets(str[i]);
    }
}

void transforma(char str[][100], int nstrings) {
    char aux;
    for (int i = 0; i < nstrings; i++) {
        for (int j = 0; str[i][j]; j += 2) {
            if (str[i][j + 1] == '\0') break;
            aux = str[i][j];
            str[i][j] = str[i][j + 1];
            str[i][j + 1] = aux;
        }
    }
}

void show(char str[][100], int nstrings) {
    for (int i = 0; i < nstrings; i++)
        printf("%s\n", str[i]);
}

int main() {
    char str[100][100];
    int nstrings;

    scanf("%d%*c", &nstrings);

    ler_strings(str, nstrings);
    transforma(str, nstrings);
    show(str, nstrings);
    return 0;
}