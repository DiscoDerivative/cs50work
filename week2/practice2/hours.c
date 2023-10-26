//Calculates the total number of hours or average number of hours based on hours spent learning per week

/*
Background:

Suppose you’re taking CS50 (if you’re reading this you probably are!) and spending time every week on each problem set.
You may be wondering how many hours you’ve spent learning computer science, on average or in total! In this program,
you’ll complete a function that calculates, based on a user’s input, a total number of hours or an average number of
hours across a given number of days.

Example Output:
Number of weeks taking CS50: 3
Week 0 HW Hours: 3
Week 1 HW Hours: 7
Week 2 HW Hours: 10
Enter T for total hours, A for average hours per week: A
6.7 hours
*/

#include <ctype.h>
#include <stdio.h>

//Prompts user for the number of weeks they took CS50
int weeksOfCS50(void);
//Prompts user for the hours spent per week of CS50 they had
int hoursPerWeek(void);
//Prompts user to answer if they want to calculate the total hours or average hours
int totalOrAverage(void);
// Prints Total or Average in Hours
void printTotalOrAverage(void);

//Global Variables
int weeks;
int hours[] = {0};
char answer;

int main(void)
{
    weeksOfCS50();
    hoursPerWeek();
    totalOrAverage();

    if(answer == 'T' || answer == 'A')
    {
        printTotalOrAverage();
    }
}

int weeksOfCS50(void)
{
    printf("Number of weeks taking CS50: ");
    scanf("%i", &weeks);

    return weeks;
}

int hoursPerWeek(void)
{
    for(int i = 0; i < weeks; i++)
    {
        printf("Week %i HW Hours: ", i);
        scanf("%i", &hours[i]);
    }
}

int totalOrAverage(void)
{
    printf("Enter T for total hours, A for average hours per week: ");
    scanf(" %c", &answer);

    // Validating Input
    if (answer == 't' || answer == 'a')
    {
        answer = toupper(answer);  
    }
    else if (answer != 'T' || answer != 'A')
    {
        printf("ERROR: Invalid response.");
        return 1;
    } 
}

void printTotalOrAverage(void)
{
    int sum = 0;
    
    // Calculate the total hours
    for (int i = 0; i < weeks; i++)
    {
        sum += hours[i];
    }

    // Checks if answer is T, if so prints total hours
    if (answer == 'T')
    {
        printf("%.1lf hours", (double)sum);
    }

    // Checks if answer is A, if so takes total hours and divides it by number of weeks.
    else
    {
        printf("%.1lf hours", (double)sum / (double)weeks);
    }
}
