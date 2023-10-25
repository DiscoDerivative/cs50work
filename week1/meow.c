#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int i = 0;

    // while loop
    while(i < 3)
    {
        printf("meow\n");
        i++;
    }

    // for loop
    for(i = 0; i < 3; i++){
        printf("meow\n");
    }

    //forever loop
    while(true){
        printf("meow\n");
    }
}
