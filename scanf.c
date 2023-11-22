#include <stdio.h>

// int main(void) {

    // char byte1 = '0', byte2 = '0';

    // int res = scanf("%c,%c", &byte1, &byte2);
    // printf("res = %d\nbyte1 = %c, byte2 = %c\n", res, byte1, byte2);

// }

/*
%d - Целое число в десятичной форме int
%i - Целое число во всех формах (10, 8, 16) int
%u - unsigned int чило в десятичной форме
%o - int в десятичной форме
%x, %X - int в шеснадцатиричной форме
%f, %e, %g - float
%F, %E, %G
%c - char 
%s - Строка, читается до первого пробела, перевода строки или символа табуляции

Модификаторы:
h - для short int и unsigned int
hh - для signed char и unsigned char
l - для long int, unsigned long и double
L - для long double
ll(В стандарте C99) - для long long int и unsigned lon long
цифры - Максимальная ширина ввода(либо максимальная ширина достигнута, либо служебный символ)
* - пропуск данных
*/


int main(void) {

    unsigned int price = 0;
    double weight = 0.0;

    int res = scanf("%*llu; %u; %lf", &price, &weight);
    printf("res = %d \nprice = %d weight = %.2f\n", res, price, weight);

    return 0;
}
