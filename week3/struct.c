#include <string.h>
#include <stdio.h>

typedef struct
{
    char name[9];
    int age;
}Person;


int main(void)
{
    Person student = {"Margaret", 19};
    strcpy(student.name, "Cole");
    student.age = 23;
    printf("%s\n", student.name);
    printf("%d\n", student.age);
}

