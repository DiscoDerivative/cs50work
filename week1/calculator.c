#include <stdio.h>

int main(void)
{
    long x, y;

    printf("x: ");
    scanf("%li", &x);
    printf("y: ");
    scanf("%li", &y);

    double z = (double) x / (double) y;
    printf("%lf\n", z);
}
