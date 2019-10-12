#include <math.h>
#include <stdio.h>

void n_terms(int n) {
    int term = n - 1 + pow(n, 3) / n;
    for (int i = n; i > 0; i--) {
        printf("%d ", term);
        term -= 2;
    }
    printf("\n");
}

int main() {
    int n, casos;

    scanf("%d", &casos);

    for (int i = 0; i < casos; i++) {
        scanf("%d", &n);
        printf("%d^3 = ", n);
        n_terms(n);
    }
    return 0;
}