#include <ctype.h>
#include <stdio.h>
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

void transforma(char str[][MAXC], int nstr) {
    for (int i = 0; i < nstr; i++)
        for (int j = 0; str[i][j]; j++)
            if (j % 2 == 0)
                str[i][j] = toupper(str[i][j]);
            else
                str[i][j] = tolower(str[i][j]);
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