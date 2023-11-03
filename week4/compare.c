#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[] = "Jake";
    char name2[] = "Jake";

    int result = strcmp(name, name2);
    printf("%d", result);
}