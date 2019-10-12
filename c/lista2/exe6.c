#include <stdio.h>

void escreve(int n, char c) {
    int count = 0, spaces;

    for (int i = 0; i < n; i++) {
        for (spaces = (n - i); spaces > 0; spaces--)
            printf(" ");
        for (int j = 0; j <= count; j++)
            printf("%c", c);
        count += 2;
        printf("\n");
    }
}
int main() {
    int n = 0;

    char c;

    while (n != -1) {
        printf("\nentre com o n de repeticoes: ");
        scanf("%d", &n);

        getchar();

        printf("entre com o caractere: ");
        scanf("%c", &c);

        if (n != 1) escreve(n, c);
    }
}