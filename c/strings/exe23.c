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

int valida(char *str, char *ref, int nstrings) {
    if (strchr(ref, *str)) return 0;

    for (; *str; str++) {
        // if (strchr(ref, *str) && *(str + 1) == '\0') return 0;
        if ((isdigit(*str) && strchr(ref, *str)) ||
            (strchr(ref, *str) && *(str + 1) == '\0')) return 0;
    }

    return 1;
}

int main() {
    char str[100][100], ref[100] = {'*', '+', '/', '-', '\0'};
    int nstrings;
    ler_strings(str, &nstrings);
    printf("\n");

    for (int i = 0; i < nstrings; i++) {
        if (valida(str[i], ref, nstrings))
            printf("sim\n");
        else

            printf("não\n");
    }
}