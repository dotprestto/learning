#include <stdio.h>

int isprime(int n) {
    int flag = 1;

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            flag = 0;
            break;
        }
    }
    return flag;
}

int sum(int n) {
    int sum = 0, count = 0, totest = 2;
    while (count != n) {
        if (isprime(totest) == 1) {
            sum += totest;
            count++;
        }
        totest++;
    }
    return sum;
}

int main() {
    int n = 0;

    while (n != -1) {
        scanf("%d", &n);
        if (n != -1) {
            printf("%d\n", sum(n));
        }
    }
    return 0;
}