// Calculates the time it takes for a population to grow given a starting and ending value
#include <stdio.h>

// Prompt User for Population Size
int enterPopulationStart(void);
// Prompt User for Ending Population Size
int enterFinalPopulation(void);
// Calculate Number of Years Reauired for Population to Reach End Size
int findFinalPopulationInYears(void);
// Print Number of Years Required for Population to Reach End Size
void printFinalPopulationInYears(void);

// Global Variables
int startingValue;
int endingValue;
int year;

int main(void)
{
    enterPopulationStart();
    enterFinalPopulation();
    findFinalPopulationInYears();
    printFinalPopulationInYears();
}

int enterPopulationStart(void)
{
    while (startingValue < 9){
        printf("Start size: ");
        scanf("%d", &startingValue);
    }
    
    return startingValue;
}

int enterFinalPopulation(void)
{
    while (endingValue < startingValue){
        printf("End size: ");
        scanf("%d", &endingValue);
    }

    return endingValue;
}

int findFinalPopulationInYears()
{
    do
    {
        startingValue = startingValue + (startingValue / 3) - (startingValue / 4);
        year++;
    }
    while(startingValue < endingValue);

    return year;
}

void printFinalPopulationInYears()
{
    printf("Years: %d", year);
}
