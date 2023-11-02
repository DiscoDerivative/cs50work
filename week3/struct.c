#include <string.h>
#include <stdio.h>

typedef struct
{
    char name[8];
}Name;


int main(void)
{
    Name margaret;
    strcpy(margaret.name, "Margaret");
    printf("%s\n", margaret.name);
}

