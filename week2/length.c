#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[10];
    printf("What's your name? ");
    scanf("%s", &name);
    int n = strlen(name);
    printf("%i\n", n);
}
