#include <cs50.h>
#include <stdio.h>
#include <math.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("Use %i coins\n", coins);
    printf("%i:quarters %i:dimes %i:nickles %i:pennies\n",quarters, dimes, nickels, pennies);
}

int get_cents(void)
{
    int cents;
    do
    {
        cents=get_int("Enter change (in whole numbers): ");
        printf("\n");
    }
    while (cents<0);

    return cents;
}

int calculate_quarters(int cents)
{
    int quarters;
    quarters=round(cents/25);
    return quarters;
}

int calculate_dimes(int cents)
{
    int dimes;
    dimes=round(cents/10);
    return dimes;
}

int calculate_nickels(int cents)
{
    int nickles;
    nickles=round(cents/5);
    return nickles;
 }

int calculate_pennies(int cents)
{
    int pennies;
    pennies=round(cents);
    return pennies;
}