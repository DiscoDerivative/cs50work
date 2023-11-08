#include <stdio.h>

int main(void)
{
    FILE *file;

    file = fopen("congratulations.txt", "r");

    if(file == NULL)
    {
        printf("File does not exist.");
        return 1;
    }

    else
    {
        char content[100];

        while(fgets(content, 100, file))
        {
            printf("%s", content);
        }
    }
}