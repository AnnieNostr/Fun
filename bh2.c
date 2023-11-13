#include <stdio.h>
#include <cs50.h>

char get_choice(void);
void print_data(char x);

int main(void)
{
    printf("Pura Vida\n");
    {
        printf("### #   #\n");
    }
    {
        printf("# # #   #\n");
    }
    {
        printf("###  # #\n");
    }
    {
        printf("#    # #\n");
    }
    {
        printf("#    # #\n");
    }
    {
        printf("#     #\n");
    }
    printf("\n");

    // Program to ask name and provide bitcoin information

    string name = get_string("Welcome to PV database, what's your name? ");
    printf("Hi %s, what bitcoin information do you need?\n", name);
    printf("a. block height\nb. bitcoin price\nc. bitcoin supply\n");

    {
        int i = 0;
        while (i < 3)
        {
            char x = get_choice();
            print_data(x);
            i++;
        }
    }

}

char get_choice(void)
{
    char x = get_char("Enter letter: ");
    return x;
}

void print_data(char x)
{
    int a = 816547;
    int b = 37279;
    int c = 19540000;

    if(x=='a')
    {
        printf("The block height is %i.\n", a);
    }
    else if (x=='b')
    {
        printf("Bitcoin is worth $ %i.\n", b);
    }
    else
    {
        printf("There are %i in supply.\n", c);
    }
}
