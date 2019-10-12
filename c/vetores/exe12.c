#include <stdio.h>

void load(int array[], int *na) {
    int n = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    *na = n;
}

void removePos(int array[], int *na, int position) {
    (*na)--;
    for (int i = position; i < *na; i++) {
        array[i] = array[i + 1];
    }
}

void removePar(int array[], int *na) {
    for (int i = 0; i < *na; i++) {
        if (array[i] % 2 == 0) {
            removePos(array, na, i);
            i--;
        }
    }
}

void show(int array[], int na) {
    for (int i = 0; i < na; i++)
        printf("%d ", array[i]);
    printf("\n");
}

int main() {
    int array[100], na;

    load(array, &na);

    removePar(array, &na);

    show(array, na);

    return 0;
}