#include <stdio.h>

int fibonacci(int *a, int *b) {
    int aux = 0;
    aux = *a + *b;
    *a = *b;
    *b = aux;
    return aux;
}
int main() {
    int n = 0, a = 0, b = 1;

    while (n != -1) {
        scanf("%d", &n);
        printf("%d ", b);
        for (int i = 0; i < (n - 1); i++) {
            printf("%d ", fibonacci(&a, &b));
        }
        a = 0;
        b = 1;
        printf("\n");
    }
    return 0;
}