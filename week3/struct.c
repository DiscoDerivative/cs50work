#include <string.h>
#include <stdio.h>

typedef struct
{
    char name[8];
    int age;
}Name;


int main(void)
{
    Name margaret;
    strcpy(margaret.name, "Margaret");
    margaret.age = 19;
    printf("%s\n", margaret.name);
    printf("%d\n", margaret.age);

}

