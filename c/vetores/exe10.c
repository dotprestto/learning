#include <stdio.h>
void load(int array[], int *na) {
    int n = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    *na = n;
}

int getIndex(int array[], int na) {
    int maior = array[0], index = 0;
    for (int i = 1; i < na; i++) {
        if (array[i] > maior) {
            index = i;
            maior = array[i];
        }
    }
    return index;
}

void show(int vetor[], int nvetor) {
    int i;
    for (i = 0; i < nvetor; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}
void removeBiggest(int array[], int *na) {
    int position = getIndex(array, *na);
    *na -= 1;

    for (int i = position; i < *na; i++) {
        array[i] = array[i + 1];
    }
}

int main() {
    int array[100], na;

    load(array, &na);
    show(array, na);
    removeBiggest(array, &na);
    show(array, na);
    return 0;
}