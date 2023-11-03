#include <stdio.h>

void swap (int *a, int *b);
void selectionSort (int array[], int size);
void printArray (int array[], int size);


int main(void)
{
    int data[] = {1, 3, 2, 5};
    int size = 4;
    selectionSort(data, size);
    printArray(data, size);
}

void swap (int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort (int array[], int size)
{

    for(int i = 0; i < size - 1; i++)
    {
        int minimunIndex = i;

        for(int j = i + 1; j < size; j++)
        {
            if (array[j] < array[minimunIndex])
            {
                printf("Value: %d at Index: %d is less than Value: %d at index: %d\n",array[j], j, array[minimunIndex], minimunIndex);
                minimunIndex = j;
            }
        }

                    printf("Swapping minimum number: %d with %d\n", array[minimunIndex], array[i]);
            swap(&array[minimunIndex], &array[i]);
    }
}

void printArray (int array[], int size)
{
    printf("\nSorted Array: ");
    for(int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
}
