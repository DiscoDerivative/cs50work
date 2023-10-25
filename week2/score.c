#include <stdio.h>

float average(int length, int array[]);

const int N = 3;

int main(void){

    int score[N];

    for (int i = 0; i < N; i++)
    {
        printf("Score: ");
        scanf("%d", &score[i]);
    }

    printf("Average: %f\n", average(N, score));
}

float average(int length, int array[])
{
    int sum = 0;

    for(int i = 0; i < length; i++)
    {
        sum += array[i];
    }

    return sum / (float) length;
}
