#define SIZEARR(x) (sizeof(x) / sizeof(x[0]))
#include <stdio.h>

int valueinarray(float val, float *arr) {
    int i;
    for (arr, i = 1; *arr; i++, arr++) {
        printf("%d \n", i);
        if (*arr == val)
            return 1;
    }

    return 0;
}

int main() {
    float a[100] = {10, 20, 30, 40, 50};

    printf("%ld \n", SIZEARR(a));
    printf("%d ", valueinarray(40, a));
    return 0;
}