#include <stdio.h>

int main(void)
{
    char string[20];
    printf("What's your name? ");
    scanf("%s", &string);
    printf("hello, %s\n", string);
}
