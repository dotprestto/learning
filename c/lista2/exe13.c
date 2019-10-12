#include <stdio.h>

int getSum(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int reduce(int n) {
    n = getSum(n);
    if (n > 9)
        n = reduce(n);
    return n;
}

int main() {
    int n = 0;
    while (n != -1) {
        scanf("%d", &n);
        if (n != -1) printf("%d\n", reduce(n));
    }

    return 0;
}