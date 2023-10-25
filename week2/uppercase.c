#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main (void)
{
    char string[20];

    printf("Before: ");
    scanf("%s", &string);
    printf("After: ");

    for(int i = 0, n = strlen(string); i < n; i++)
    {
        printf("%c", toupper(string[i]));
    }
    printf("\n");
}
