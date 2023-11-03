#include <stdio.h>
#include <math.h>

int main(void)
{
    // Square root

    printf("%lf\n", sqrt(144));

    // Rounding
    // Use ceil() to round it up, use floor() to round it down

    printf("%lf ", ceil(1.3));
    printf("%lf\n", floor(1.3));

    // Power

    printf("%lf", pow(2, 3));
}