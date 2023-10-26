/*
Background:
In this lab, the user is prompted for a password, which will then be validated
using a function check that you will complete. If the password contains at
least one upper case letter, one lower case letter, a number, and a symbol
(meaning a printable character that’s not a letter or number, such as
‘!’, ‘$’ and ‘#’), the function should return true. If not it should return false.

Expected Output:
Enter your password: hello
Your password needs at least one uppercase letter, lowercase letter, number and symbol!
*/

//Symbols allowed for password are from the western michigan university site but i removed some cause i felt like it.

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

// Validates password to ensure it meets requirements
bool check(char string[]);

int main(int argc, char* argv[])
{
    // Validates string from command line
    if(argc < 1 || argc > 2)
    {
        printf("ERROR: Invalid command line arguments.");
        return 1;
    }
    else 
    {
        check(argv[1]);
    }
}

bool check(char string[])
{
    bool uppercase = false;
    bool lowercase = false;
    bool symbol = false;
    bool number = false;

    int n = strlen(string);

    for (int i = 0; i < n; i++)
    {
        // Checking if the current character in the string has a uppercase
        if (string[i] >= 65 && string[i] <= 90)
        {
            uppercase = true;
        }
        // Checking if the current character in the string has a lowercase
        else if (string[i] >= 97 && string[i] <= 122)
        {
            lowercase = true;
        }
        // Checking if the current character in the string has a symbol
        else if (string[i] == '~' || string[i] == '`' ||
                 string[i] == '!' || string[i] == '@' ||
                 string[i] == '#' || string[i] == '$' ||
                 string[i] == '%' || string[i] == '^' ||
                 string[i] == '&' || string[i] == '*' ||
                 string[i] == '_' || string[i] == '+' ||
                 string[i] == '=' || string[i] == '?' ||
                 string[i] == ':' || string[i] == ';' ||
                 string[i] == '<' || string[i] == '>')
        {
            symbol = true;
        }
        // Checking if the current character in the string has a symbol
        else if (isdigit(string[i]) == true)
        {
            number = true;
        }
    }

    // Sends confirmation message if the password is valid and a error otherwise.
    if(uppercase == true && lowercase == true && symbol == true && number == true)
    {
        printf("Your password is valid!");
        return true;
    }
    else
    {
        printf("Your password needs at least one uppercase letter, lowercase letter, number and symbol!");
        return false;
    }
}
