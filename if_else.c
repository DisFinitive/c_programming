#include <stdio.h>

int main(void)
{
    int x;
    if(scanf("%d", &x) != 1) {
        printf("Error input");
        return 0;
    }

    if(x < 3 || x > 11) {
        printf("x not in [3;11]\n");
    } else {
        printf("x in [3;11]\n");
    }
    printf("Press Enter to close the app\n");
    _flushall();
    getchar();
    return 0;
}