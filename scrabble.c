#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);
    string winner;

    if (score1>score2)
    {
        winner="Player1";
    }
    else if (score2>score1)
    {
        winner="Player2";
    }
    else
    {
        winner="Tie";
    }

    // TODO: Print the winner
    {
        printf("The winner is: %s",winner);
        printf("\n");
    }
}
// TODO: Compute and return score for string
int compute_score(string word)
{
    int score1=0;
    int score2=0;
    int talley;
    int l=0;
    int score=0;
    int add=0;
    int convert=0;

    {
        int length = strlen(word);
        printf("%s: %i\n",word,length);
        {
            while (l<length)
            {
                convert=toupper(word[l])-65;
                if (convert<0||convert>25)
                {
                    add=0;
                }
                else
                {
                    add=POINTS[convert];
                }
                printf("%c-%i\n",toupper(word[l]),add);

                talley=score+add;
                score=talley;
                l++;
            }
        }
        printf("score: %i\n",score);
        printf("\n");
    }

    return score;
}
