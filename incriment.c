#include <stdio.h>

int main(void) {

    int c = 2, s = 5;
    int w = c++;
    int h = ++s;

    // printf("c = %d s = %d w = %d h = %d\n", c, s, w, h);

    int r = 1;
    double vd = 10.0;
    short b = 30;

    r += 1 + 3;
    vd *= 3.0 - b;
    b /= 20 - 10;
    printf("r = %d vd = %.2f b = %d", r, vd, b);

    return 0;
}