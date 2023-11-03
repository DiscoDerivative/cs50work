#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char string[10];
    printf("Enter string: ");
    scanf("%s", &string);
    printf("String entered: %s", string);

    char *empty = malloc(strlen(string) + 1);

    if (empty == NULL)
    {
        printf("Memory not allocated.");
        return 1;
    }

    strcpy(empty, string);
    printf("Copied String: %s", *empty);
    
    free(empty);
}