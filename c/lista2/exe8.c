#include <stdio.h>

void escreve(int n, char c) {
    int spaces;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((j != 0 && j != (n - 1)) && (i != 0 && i != (n - 1)))
                printf(" ");
            else
                printf("%c", c);
        }
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