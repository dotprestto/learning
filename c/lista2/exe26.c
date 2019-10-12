#include <stdio.h>

void setbigger(int n, int *maior, int *submaior) {
    if (n > *maior)
        *maior = n;
    else if (n > *submaior)
        *submaior = n;
}

int main() {
    int maior = 0, submaior = 0, n, casos;
    scanf("%d", &casos);

    for (int i = 0; i < casos; i++) {
        scanf("%d", &n);
        setbigger(n, &maior, &submaior);
    }

    printf("1 maior = %d\n2 maior = %d\n", maior, submaior);
    return 0;
}