#include <stdio.h>

void escreve(int n, char c) {
    int count = 1 + 2 * (n - 1), spaces = 0;

    for (int i = n; i > 0; i--) {
        for (spaces = 0; spaces < (n - i); spaces++)
            printf(" ");
        for (int j = 0; j < count; j++)
            printf("%c", c);
        count -= 2;
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