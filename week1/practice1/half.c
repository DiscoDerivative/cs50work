/*
Background:
Suppose you are eating out at a restaurant with a friend and want to split the 
bill evenly. You may want to anticipate the amount you’ll owe before the bill 
arrives with tax added. In this problem, you’ll complete a function to 
calculate the amount each of you owes based on the bill amount, the tax, and the tip.

Desired Output
Bill before tax and tip: 12.50
Sale Tax Percent: 8.875
Tip percent: 20
You will owe $8.17 each!
*/

#include <stdio.h>

// Prints out how much you owe when a bill is split in half (includes sales tax and tip)
double amountOwed(double bill, double tax, int tip);

int main()
{
    amountOwed(23.50, 7, 15);
}

double amountOwed(double bill, double tax, int tip)
{
    // Reads the bill (pre-tax and pre-tip), tax percent and tip percent.
    printf("Bill before tax and tip: %.2lf\n", bill);
    printf("Sale Tax Percent: %.2lf\n", tax);
    printf("Tip percent: %d\n", tip);
    
    // Calculates the bill after sales tax.
    bill *= 1 + (tax / 100); 

    // Calculates the bill after adding the tip.
    bill *= 1 + ((double)tip / 100);
    
    // Divides the proper bill into two.
    bill /= 2;

    // Amount Owed Statement
    printf("You will owe $%.2lf each!", bill);

    return bill;
}
