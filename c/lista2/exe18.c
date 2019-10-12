#include <math.h>
#include <stdio.h>

float operate(float number_1, float number_2, char operation) {
    switch (operation) {
        case '*':
            return number_1 * number_2;
            break;
        case '/':
            return number_1 / number_2;
            break;
        case '+':
            return number_1 + number_2;
            break;
        case '-':
            return number_1 - number_2;
            break;
        case '^':
            return pow(number_1, number_2);
            break;
    }
}

int main() {
    char operation;
    int num_ops;
    float number_1, number_2;

    scanf("%d", &num_ops);

    for (int i = 0; i < num_ops; i++) {
        scanf("%f%c%f", &number_1, &operation, &number_2);

        float result = operate(number_1, number_2, operation);
        printf("%.3f%c%.3f = %.3f\n", number_1, operation, number_2, result);
    }

    return 0;
}