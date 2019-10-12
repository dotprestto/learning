#include <stdio.h>
void load(int array[], int *na) {
    int n = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    *na = n;
}

void show(int vetor[], int nvetor) {
    int i;
    for (i = 0; i < nvetor; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}
void removePos(int array[], int *na, int position) {
    (*na)--;
    for (int i = position; i < *na; i++) {
        array[i] = array[i + 1];
    }
}

int main() {
    int array[100], na;

    load(array, &na);
    show(array, na);

    removePos(array, &na, 0);
    removePos(array, &na, na);

    show(array, na);
    return 0;
}