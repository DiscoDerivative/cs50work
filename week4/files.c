#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *file;
    
    // Open a file in read mode
    file = fopen("congratulations.txt", "r");

    //If file does not exist
    if(file == NULL)
    {
        printf("File does not exist.");
        fclose(file);
    }

    else 
    {
    
        // Store content of file
        char content[100];

        // Read and print the file
        while(fgets(content, 100, file))
        {
                printf("%s", content);

        }
    }

    // Close file
    fclose(file);

}