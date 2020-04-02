#include <stdio.h>
#define MAXC 200
#define MAX 100

typedef struct {
    int n;
    float v[MAX];
} TVETOR;

typedef struct {
    int a;
    float x;
    char c;
    char s[MAXC];
    TVETOR vet;
} TDADOS;

void lervet(float vx[], int *nx) {
    int i;
    scanf("%d", nx);
    for (i = 0; i < *nx; i++)
        scanf("%f", &vx[i]);
}

void showvet(float vx[], int nx) {
    int i;
    for (i = 0; i < nx; i++)
        printf("%d %f\n", i, vx[i]);
}

int main() {
    TDADOS r;
    scanf("%c %d %f%*c", &r.c, &r.a, &r.x);
    scanf("%[^\n]", r.s);
    lervet(r.vet.v, &r.vet.n);
    printf("[%c] [%d] [%f]\n%s\n", r.c, r.a, r.x, r.s);
    showvet(r.vet.v, r.vet.n);
    return 0;
}