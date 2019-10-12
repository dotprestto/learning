#include <ctype.h>
#include <stdio.h>

void contar(int count[], int ncount, char str[]) {
    for (int i = 0; i < ncount; i++)
        count[i] = 0;

    for (int i = 0; str[i]; i++)
        if (isalpha(str[i]))
            count[tolower(str[i]) - 'a']++;
}

int igual(char str[], char str2[]) {
    int i = 0;
    for (i; str[i]; i++) {
        if (str[i] != str2[i])
            return 0;
    }
    return str[i] == str2[i];
}

void show(int array[], int na) {
    for (int i = 0; i < na; i++) {
        if (array[i])
            printf("#%c: %d\n", 'a' + i, array[i]);
    }
}

int main() {
    char str[100];
    int ncount = 'z' - 'a' + 1;
    int count[ncount];
    gets(str);
    while (!igual(str, "fim")) {
        contar(count, ncount, str);
        show(count, ncount);
        gets(str);
    }
    return 0;
}