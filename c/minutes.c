#include <stdio.h>

int main() {
    int h, m, s;

    printf("entre com os minutos ");
    scanf("%d", &m);

    h = m / 60;
    s = (m * 60) - (h * 60 * 60);

    printf("Hora(s): %d, segundo(s): %d", h, s);

    return 0;
}