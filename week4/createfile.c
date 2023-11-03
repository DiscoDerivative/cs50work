#include <stdio.h>

int main(void)
{
    //Creating a file pointer
    FILE *file;

    // Creating
    file = fopen("filename.txt", "a");

    //Writing
    fprintf(file, "\nC is so based");
    
    //Closing
    fclose(file);
}