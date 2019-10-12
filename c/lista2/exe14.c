#include <stdio.h>

int isprime(int n) {
    int flag = 1;

    for (int i = 2; i < (n / 2); i++) {
        if (n % i == 0) {
            flag = 0;
            break;
        }
    }
    return flag;
}

int main() {
    int n = 0;

    while (n != -1) {
        scanf("%d", &n);
        if (n != -1) {
            if (n == 1)
                printf("%d\n", 1);
            else
                printf("%d\n", isprime(n));
        }
    }
    return 0;
}