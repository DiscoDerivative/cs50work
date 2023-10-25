#include <stdio.h>

int main(void)
{

char c1 = 'H';
char c2 = 'I';
char c3 = '!';

char string[3] = "HI!";

//STRING SIZE IS STRING + NULL TERMINATING CHARACTER

printf("%i %i %i %i\n", string[0], string[1], string[2], string[3]);

    char name[] = {""};

    printf("What's your name? ");
    scanf("%s", &name);
    int n = strlen(name);
}
