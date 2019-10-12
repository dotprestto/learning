#include <stdio.h>

void mount_str(char str[], char chr, int nchars) {
    int i, j;

    for (i = 0; i < nchars; i++)
        str[i] = chr;
    str[i] = '\0';
}

void writestr(char string[100][100], int ncasos) {
    int i, j;
    for (i = 0; i < ncasos; i++)
        printf("%s\n", string[i]);
}

int main() {
    int ncasos, nchars, tamanho_matriz;
    char string[100][100], chr;
    scanf("%d%*c", &ncasos);

    for (int i = 0; i < ncasos; i++) {
        scanf("%d %c", &nchars, &chr);
        mount_str(string[i], chr, nchars);
        }

    writestr(string, ncasos);
    return 0;
}