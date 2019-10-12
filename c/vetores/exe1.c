#include <stdio.h>

void ler(int v[], int *p) {
    int i, n;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
    *p = n;
}

int sum(int v[], int n) {
    int i, sum = 0;
    for (i = 0; i < n; i++)
        sum += v[i];

    return sum;
}
int main() {
    int va[100], na;
    int vb[100], nb;

    ler(va, &na);
    printf("%d ", sum(va, na));

    return 0;
}
