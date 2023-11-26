#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    // TODO: Prompt for start size
    {
        int spop;
        spop = get_int("What is the starting population? ");
        do
        {
            if (spop < 9)
            {
                printf("Population is too small. Please enter value greater than 9.\n");
                spop = get_int("What is the starting population? ");
            }
            else
            {
                printf("\n");
            }
        }
        while (spop < 9);

        printf("You entered %i as the starting population.\n", spop);
        printf("\n");

        int epop;
        epop = get_int("What is the ending population? ");

        do
        {
            if (epop<spop)
            {
                printf("Population is too small. Please enter value greater than %i.\n",spop);
                epop = get_int("What is the ending population? ");
            }
            else
            {
                printf("\n");
            }
        }
        while (epop < spop);

        printf("You entered %i as the ending population.\n", epop);
        printf("\n");

        const int birth = 3;
        const int death = 4;
        int cpop=spop;
        int npop=spop;
        int y=0;
        //Calculate years to reach end population

        do
        {
            cpop=npop;
            printf("population after %i year(s): %i\n",y,cpop);
            npop = cpop+round(cpop/birth)-round(cpop/death);
            printf("npop: %i epop: %i cpop: %i\n",npop,epop,cpop);
            y++;

        }
        while (epop>npop);
        printf("The final population is %i.\n",npop);
        printf("The population will reach the target within %i year(s)\n",y);
    }
    printf("\n");
}
