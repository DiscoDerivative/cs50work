#include <stdio.h>

void swap(int *a, int *b);
void selectionSort(int array[], int size);
void printArray(int array[], int size);

int main(void)
{
    // Size of array
    const int SIZE = 10;

    // List of years
    int years[] = {2002, 2008, 2003, 2010, 2001, 2009, 2005, 2004, 2006, 2007};
    selectionSort(years, SIZE);
    printArray(years, SIZE);
}

// Swaps the minimum year value with the previous value
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Uses a selection sort to organize the array (descending)
void selectionSort(int array[], int size)
{
    for(int i = 0; i < size - 1; i++)
    {
        int minimumIndex = i;

        for(int j = i + 1; j < size; j++)
        {
            if(array[j] < array[minimumIndex])
            {
                minimumIndex = j;
            }
        }
        
        swap(&array[minimumIndex], &array[i]);
    }
}

// Prints elements of the sorted array
void printArray(int array[], int size)
{
    printf("Sorted Array: Ascending: ");
    for(int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
}