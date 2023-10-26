// A scrabble game in C. Takes two command line arguments and declares a winner based on points earned.

/*NOTE [Cosmetic]: Change compute_score1 function to compute_score later. Along with score1 to score.
  NOTE [Own Change]: Abstracted the points array from 26 to 7 (only 7 possible points can be given to any of the 26 letters)
  NOTE [Own Change]: Instead of reading values from user via scanf, changed it to take input from the command line. I like that way better.
*/

/*Desired Output
Player 1: COMPUTER
Player 2: science
Player 1 wins!
*/

#include <stdio.h>
#include <string.h>

// Global Variables

int score1, score2;
int points[7] = {1, 2, 3, 4, 5, 8, 10};

// Calculates score
int compute_score1(char word1[]);

int main(int argc, char *argv[])
{

    if(argc < 1 || argc > 4)
    {
        printf("ERROR: Not enough command line arguments.");
        return 1;
    }

    else
    {
        compute_score1(argv[1]);
        compute_score1(argv[2]);
    }

    if(compute_score1(argv[1]) > compute_score1(argv[2]))
    {
        printf("Player 1 wins!");
    }
    else if(compute_score1(argv[1]) < compute_score1(argv[2]))
    {
        printf("Player 2 wins!");
    }
    else
    {
        printf("Tie!");
    } 
}

int compute_score1(char word1[])
{
    score1 = 0;

    // Loops through word given in the command line
    for(int i = 0; i < strlen(word1); i++)
    {
        // Will award 1 point if the letter is A, E, I, N, L, O, R, S, T or U (non case-sensitive)
        if (word1[i] == 'A' || word1[i] == 'a' || word1[i] == 'E' || word1[i] == 'e' ||
            word1[i] == 'I' || word1[i] == 'i' || word1[i] == 'L' || word1[i] == 'l' ||
            word1[i] == 'N' || word1[i] == 'n' || word1[i] == 'O' || word1[i] == 'o' ||
            word1[i] == 'R' || word1[i] == 'r' || word1[i] == 'S' || word1[i] == 's' ||
            word1[i] == 'T' || word1[i] == 't' || word1[i] == 'U' || word1[i] == 'u')
        {
            score1 += points[0];
        }
        // Will reward 2 points if the letter is D or G (non case-sensitive)
        else if ((word1[i] == 'D' || word1[i] == 'd') || (word1[i] == 'G' || word1[i] == 'g'))
        {
            score1 += points[1];
        }
        // Will reward 3 points if the letter is B, C, M or P (non case-sensitive)
        else if ((word1[i] == 'B' || word1[i] == 'b') || (word1[i] == 'C' || word1[i] == 'c') ||
                 (word1[i] == 'M' || word1[i] == 'p') || (word1[i] == 'P' || word1[i] == 'p'))
        {
            score1 += points[2];
        }
        // Will reward 4 points if the letter is F, H, V, X or Y (non case-sensitive)
        else if ((word1[i] == 'F' || word1[i] == 'f') || (word1[i] == 'H' || word1[i] == 'h') ||
                 (word1[i] == 'V' || word1[i] == 'v') || (word1[i] == 'x' || word1[i] == 'x') ||
                 (word1[i] == 'Y' || word1[i] == 'y'))
        {
            score1 += points[3];
        }
        // Will reward 5 points if the letter is K (non case-sensitive)
        else if (word1[i] == 'K' || word1[i] == 'k')
        {
            score1 += points[4];
        }
        // Will reward 8 points if the letter is J or X (non case-sensitive)
        else if ((word1[i] == 'J' || word1[i] == 'j') || (word1[i] == 'X' || word1[i] == 'x'))
        {
            score1 += points[5];
        }
        // Will reward 10 points if the letter is Q or Z (non case-sensitive)
        else if ((word1[i] == 'Q' || word1[i] == 'q') || (word1[i] == 'Z' || word1[i] == 'z'))
        {
            score1 += points[6];
        }
    }
    return score1;
}

