#include <stdio.h>
#include <string.h>

// Encrypts text by changing the character to the next character (a -> b)
char cipher(char string[]);
// Encrypts text like it would as a password.
char password(char string[]);

int main(void)
{
    // Example Text
    char text[] = "I have a BIRD";
    cipher(text);
    password(text);
}

char cipher(char string[])
{
    int n = strlen(string);

    // Checks if the text contains a letter a-z and encrypts it
    for(int i = 0; i < n; i++)
    {
        if (string[i] >= 'a' && string[i] <= 'z')
        {
            printf("%c", string[i] + 1);
        }
    }
    printf("\n");
}

char password(char string[])
{
    int n = strlen(string);

    for(int i = 0; i < n; i++)
    {
       printf("*");
    }
    printf("\n");
}
