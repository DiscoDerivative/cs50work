/*
Background:
Convert a command line argument into leetspeak (l33tsp36k)
*/

#include <stdio.h>
#include <string.h>

//Notes for myself
//argc stores the amount of commands you put in terminal (arguments passed to command line)
//argv stores the command line string you put in terminal

//Transforms string from command line into leetspeak
char replace (char string[]);

int main (int argc, char* argv[])
{
    // Validates amount of command line arguments
    if (argc < 1 || argc > 2)
    {
        printf("ERROR: Incorrect amount of command line arguments");
        return 1;
    }

    else
    {
        replace(argv[1]);
    }
}

char replace (char string[])
{
    //Size for string
    int n = strlen(string);

    //Converts characters to leetspeak
    for(int i = 0; i < n; i++)
    {
        if(string[i] == 'a')
        {
            printf("6");
        }
        else if(string[i] == 'e')
        {
            printf("3");
        }
        else if(string[i] == 'i')
        {
            printf("1");
        }
        else if(string[i] == 'o')
        {
            printf("0");
        }
        else 
        {
            printf("%c", string[i]);
        }
    }
    return string[n];
}
