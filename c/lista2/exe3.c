#include <stdio.h>
#include <string.h>

int getSum(int num)
{
    int sum = 0;
    while (num != 0)
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main()
{
    int sum = 0, num;
    printf("Número: ");
    scanf("%d", &num);

    while (num > -1)
    {
        printf("A soma dos dígitos de %d é: %d\n", num, getSum(num));
        printf("Número: ");
        scanf("%d", &num);
    }
}