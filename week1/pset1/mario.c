#include <stdio.h>

// Gets the size for the dimensions of the square
int get_size(void);
// Prints the square (grid)
void print_grid(int size);

int main(void)
{
    int n = get_size();
    print_grid(n);
}

int get_size(void)
{
    int n;
    do
    {
        printf("Size: ");
        scanf("%d", &n);
    } while (n < 1);
    return n;
}

void print_grid(int size)
{
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
