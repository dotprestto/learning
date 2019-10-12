#include <stdio.h>

void showChars(int n, char c) {
    for (int i = 0; i < n; i++)
        printf("%c", (c + i));
}

int main() {
    int n = 0;

    char c;

    while (n != -1) {
        printf("\nentre com o n de caracteres: ");
        scanf("%d", &n);

        getchar();

        printf("entre com o caractere inicial: ");
        scanf("%c", &c);

        if (n != 1) showChars(n, c);
    }
}