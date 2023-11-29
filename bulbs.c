#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

int convert(char letter);
int dec_to_binary(int l);
void print_bulb(int bit);

int main(void)
{
    string text=get_string("Enter text:  ");
    printf("Message: %s\n",text);

    int length=strlen(text);
    int a=0;

    while (a<length)
    {
        char letter=text[a];
        int l=convert(letter);
        int bit=dec_to_binary(l);

        a++;
    }
    printf("\n");
}

int convert(char letter)
{
    int l=letter;
    return l;
}

int dec_to_binary(int l)
{
    int bn[8];
    int bit=0;
    int i=0;

    while(i<=7)
    {
        bn[i]=l%2;
        printf("bn[i]: %i%i\n",bn[i],i);
        l=l/2;
        printf("l/2: %i\n",l);
        i++;
        printf("l:%i\n",l);
    }
    for(int j=i-1;j>=0;j--)
        {
            bit=bn[j];
            print_bulb(bit);
        }
        printf("\n");
        return 0;
}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}
