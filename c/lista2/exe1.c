#include <stdio.h>

int main()
{
    int num, i = 1, r = 0;
    scanf("%d", &num);
    while (num > -1)
    {
        r += (num * i);
        i *= 10;
        scanf("%d", &num);
    }
    printf("%d\n", r);
    return 0;
}