#include <ctype.h>
#include <stdio.h>
#include <string.h>
#define MAXL 100
#define MAXC 100

void ler_strs(char str[][MAXC], int *nstr) {
    int n;
    char tempstr[100];
    scanf("%d\n", &n);
    // scanf("%d%*c", &n); também funciona

    for (int i = 0; i < n; i++)
        gets(str[i]);
    *nstr = n;
}

void inverte(char *str, int len) {
    char c;
    for (int i = 0, j = len - 1; i < j; i++, j--) {
        c = str[i];
        str[i] = str[j];
        str[j] = c;
    }
}

void transforma(char str[][MAXC], int nstr) {
    for (int i = 0; i < nstr; i++)
        inverte(str[i], strlen(str[i]));
}

void show(char str[][MAXC], int nstr) {
    for (int i = 0; i < nstr; i++)
        printf("%s\n", str[i]);
}

int main() {
    char str[MAXL][MAXC];
    int nstr;

    ler_strs(str, &nstr);
    transforma(str, nstr);
    show(str, nstr);
}