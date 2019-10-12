#include <stdio.h>

int converttos(int h, int m, int s) {
    return h * 3600 + m * 60 + s;
}

void converttotime(int toconvert, int *ch, int *cm, int *cs) {
    *ch = toconvert / 3600;
    *cm = (toconvert % 3600) / 60;
    *cs = (toconvert % 3600) % 60;
}

void add(int *h, int *m, int *s, int adds) {
    int final = converttos(*h, *m, *s) + adds;
    converttotime(final, h, m, s);
}

int main() {
    int casos, h, m, s, adds;
    scanf("%d", &casos);

    for (int i = 0; i < casos; i++) {
        scanf("%d %d %d", &h, &m, &s);
        scanf("%d", &adds);
        add(&h, &m, &s, adds);
        printf("%d %d %d\n", h, m, s);
    }
    return 0;
}