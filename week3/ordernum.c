#include <stdio.h>

void swap(int *a, int *b);
void selectionSort(int array[], int size);
void printArray(int array[], int size);

int main(void)
{
    const int size = 5;
    int num[] = {0, 2, 1, 4, 3};
    selectionSort(num, size);
    printArray(num, size);
}

void swap(int *a, int *b)
{
    // Temp holds address of a
    int temp = *a;

    // Address of a is initialized to the address of b
    *a = *b;

    // Address b is initialized to temp (copy of address of a)
    *b = temp;
}

void selectionSort(int array[], int size)
{
    /* A selection sort can only compare n - 1 values, so it needs to be -1.
     * Example: {3, 1, 2}. Compares 3 and 1, compares 1 and 2.
     * Two compares = n - 1 where n equals size.
     * 
     * J holds the i + 1 value and compares it to the previous (i) value.
     * If the value at index of j (i + 1) is less than the value at the minimum index
     * The value at j gets swapped with the value at the minimum index,
     * 
     * i is currently 0
     * 
     * Example: {3, 1, 2}. If j (i + 1) -> 1 is less than minimum index (i) -> 3
     * Minimum index = j (1)
     * Swap (minimIndex) 1 with (i) 3 -> {1, 3, 2}. 
     * Swaps with i because i wil always be the previous value that the minimumIndex needs to swap with if so.
     * Iterate.
     * 
     * i is currently 1
     * If j (i + 2) -> 2 is less than minimum index (j) -> 3
     * Minimum index = j (2)
     * Swap (minimIndex) 2 with 1 (i) -> {1, 2, 3}
     * 
     * Iterates again because 1 (i) < size - 1 (2)
     * Since it's already in order nothing gets swapped.
     * It will stop looping because i is incremeneted to 2 now.
     * 
     * Finished Result: {1, 2, 3}
     */

    for(int i = 0; i < size - 1; i++)
    {
        int minimumIndex = i;

        for (int j = i + 1; j < size; j++)
        {
            if (array[j] < array[minimumIndex])
            {
                minimumIndex = j;
            }
        }
         swap(&array[minimumIndex], &array[i]);
    }
}

void printArray(int array[], int size)
{
    printf("Sorted Array: ");
    for(int i = 0; i < size; i++)
    {
        printf("%d ", i);
    }
}