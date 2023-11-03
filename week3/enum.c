#include <stdio.h>

// enum is a list of constants
// often used in switch statements to check for corresponding values
// use enums if u have a list of constant values in your program

enum Level
{
    LOW = 15, 
    MEDIUM = 30, 
    HIGH = 40
};

int main(void)
{
    enum Level var = LOW;
    printf("%d", var);
}