#include <stdio.h>
#include <string.h>

int main()
{
    char hello[13] = "hello, world";
    char empty[13];

   strcpy(empty, hello);

    printf("original string: %s\n", hello);
    printf("new string: %s\n", empty);
    
}