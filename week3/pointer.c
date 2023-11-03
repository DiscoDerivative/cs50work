#include <stdio.h>

int main(void) {

int n = 50;
printf("%i\n", n);

// & provides the address of something stored in memory
// * instructs the compiler to go to a location in memory
printf("%p\n", &n);

// pointer is a variable that contains the address of some value
// this address is stored in our computers memory

int *p = &n;
printf("%p\n", p);

// a pointer is one address that points to another too
// in this case, pointer variable p, points to n's value
printf("%i\n", *p);

//Strings
// A pointer points to the first value of a string stored in memory

char string[4] = "HI!";
printf("%p\n", string);
printf("%p\n", string[0]);
printf("%p\n", string[1]);
printf("%p\n", string[2]);
printf("%p\n", string[3]);

char *s = "HI!";
printf("%s\n", string);
}