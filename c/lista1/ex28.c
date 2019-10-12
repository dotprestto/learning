#include <stdio.h>

double from_h(int h);

double from_m(int m);

int main() {
    int h, m, s, s_acumulados;

    printf("Entre com uma hora do dia\n");
    scanf("%d %d %d", &h, &m, &s);

    s_acumulados = from_h(h) + from_m(m) + s;

    printf("Segundos acumulados = %d", s_acumulados);

    return 0;
}

double from_m(int m) {
    return m * 60;
}

double from_h(int h) {
    return h * 3600;
}