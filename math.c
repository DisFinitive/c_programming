#include <stdio.h>
#include <math.h>

int main(void)
{
    double a,b,c;
    double D, x1, x2;

    if(scanf("%lf, %lf, %lf", &a, &b, &c) != 3) {
        printf("Error input");
        return 0;
    }

    D = b*b - 4*b*c;

    if(D < 0) {
        printf("%.2f < 0", D);
        return 0;
    }

    D = sqrt(D);

    x1 = -(b + D) / (2.0 * a);
    x2 = -(b - D) / (2.0 * a);

    printf("x1 = %.2f x2 = %.2f", x1, x2);

    return 0;
}