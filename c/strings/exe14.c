#include <stdio.h>
#define SKIP printf("\n")
void ler_strings(char str[][100], int nstrings) {
    for (int i = 0; i < nstrings; i++) {
        gets(str[i]);
    }
}

void remove_pos(char str[], int pos) {
    for (int i = pos; str[i]; i++)
        str[i] = str[i + 1];
}

void transforma(char str[][100], int nstrings) {
    for (int i = 0; i < nstrings; i++)
        for (int j = 0; str[i][j]; j++)
            if (str[i][j] == str[i][j + 1]) {
                remove_pos(str[i], j);
                j--;
            }
}

void show(char str[][100], int nstrings) {
    for (int i = 0; i < nstrings; i++)
        printf("%s\n", str[i]);
}

int main() {
    char str[100][100];
    int casos, nstrings;

    scanf("%d%*c", &casos);
    nstrings = casos;

    ler_strings(str, nstrings);
    transforma(str, nstrings);
    SKIP;
    show(str, nstrings);

    return 0;
}