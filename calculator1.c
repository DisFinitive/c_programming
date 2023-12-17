#include <stdio.h>

int main(void)
{
    float a, b;
    char op = '0';

    printf("enter the first and second numbers, and the operator between them (separated by a space):\n");
    float res = scanf("%f %c %f", &a, &op, &b);

    float result;

    if(op == '+') {
        result = a + b;
    }
    else if(op == '-') {
        result = a - b;
    }
    else if(op == '*') {
        result = a * b;
    }
    else if(op == '/') {
        result = a / b;
    }
    else {
        printf("I don't understand what are you about\n");
        return 0;
    }
    printf("Res: %.3f\nPress Enter to close the app\n", result);
    _flushall();
    getchar();
    return 0;
}