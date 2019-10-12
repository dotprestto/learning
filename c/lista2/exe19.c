#include <stdio.h>

void swap(int *number_1, int *number_2) {
    int temp;
    temp = *number_1;
    *number_1 = *number_2;
    *number_2 = temp;
}

int sort(int *number_1, int *number_2, int *number_3) {
    int changes = 0;
    printf("aqui");
    if (*number_1 > *number_3) {
        swap(number_1, number_3);
        changes++;
    }
    if (*number_1 > *number_2) {
        swap(number_1, number_2);
        changes++;
    }
    if (*number_2 > *number_3) {
        swap(number_2, number_3);
        changes++;
    }
    return changes;
}

int main() {
    int number_1, number_2, number_3, result;
    scanf("%d %d %d", &number_1, &number_2, &number_3);
    if (sort(&number_1, &number_2, &number_3) != 0)
        printf("%d %d %d", number_1, number_2, number_3);
    return 0;
}