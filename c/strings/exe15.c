#include <ctype.h>
#include <stdio.h>

void ler_strings(char str[][100], int nstrings) {
    for (int i = 0; i < nstrings; i++) {
        gets(str[i]);
    }
}

void up_first(char str[][100], int nstrings) {
    for (int i = 0; i < nstrings; i++) {
        str[i][0] = toupper(str[i][0]);
        for (int j = 0; str[i][j]; j++)
            if (isspace(str[i][j]))
                str[i][j + 1] = toupper(str[i][j + 1]);
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
    up_first(str, nstrings);
    printf("\n");
    show(str, nstrings);
}