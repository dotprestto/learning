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

void removeRepetido(int array[], int *na) {
    for (int i = 0; i < *na; i++) {
        for (int j = i + 1; j < *na; j++) {
            if (array[i] == array[j])
                removePos(array, na, j);
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

    removeRepetido(array, &na);

    show(array, na);

    return 0;
}