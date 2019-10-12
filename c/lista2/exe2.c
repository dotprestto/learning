#include <stdio.h>

int main()
{
    int num, i = 1, r = 0;
    scanf("%d", &num);
    while (num > -1)
    {
        r = r * 10 + num;
        scanf("%d", &num);
    }
    printf("%d\n", r);
    return 0;
}