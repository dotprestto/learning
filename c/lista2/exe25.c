#include <stdio.h>

void count(int n, int *n_impar, int *n_par) {
    for (int temp = n; temp > 0; temp /= 10) {
        if ((temp % 10) % 2 == 0)
            *n_par += 1;
        else
            *n_impar += 1;
    }
}

int main() {
    int casos, n_impar = 0, n_par = 0, num;
    scanf("%d", &casos);

    for (int i = 0; i < casos; i++) {
        scanf("%d", &num);
        count(num, &n_impar, &n_par);
    }
    printf("#pares = %d\n#impares = %d", n_par, n_impar);
    return 0;
}