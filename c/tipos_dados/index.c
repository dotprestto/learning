#include <stdio.h>

struct dado {
    int x;
    char s[100];
};

typedef struct dado TDADO;

// ou ainda

typedef struct TDADO1 {
    // ...
} a;

// ou ainda

typedef struct {
    // ...
} TDADO2;

int main() {
    TDADO r, r2, *p;
    a A;

    // scanf("%d%*c", &r.x);
    // scanf("%s", r.s);

    // r2 = r;
    // p = &r;

    // scanf("%d", &p->x);
    return 0;
}
