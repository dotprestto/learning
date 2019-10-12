#include <stdio.h>

int main() {

    int spenttime, avgspeed;
    float fspent;

    scanf("%d%d", &spenttime, &avgspeed);

    fspent = (spenttime * avgspeed) / 12.0;

    printf("%.3lf\n", fspent);
    return 0;
}