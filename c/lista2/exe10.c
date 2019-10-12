#include <stdio.h>

void showAsc(char ci, char cf) {
    for (int i = ci; i <= cf; i++)
        printf("%c", i);
}

void showDesc(char ci, char cf) {
    for (int i = ci; i >= cf; i--)
        printf("%c", i);
}
void showChars(char ci, char cf) {
    printf("[%c] [%c]\n", ci, cf);
    if (cf > ci)
        showAsc(ci, cf);
    else
        showDesc(ci, cf);
}

int main() {
    char ci = ' ', cf = ' ';

    while (ci != '/' && cf != '/') {
        printf("\nentre com os caracteres: ");
        scanf("%c %c", &ci, &cf);

        getchar();

        if (ci != '/' && cf != '/')
            showChars(ci, cf);
    }
}