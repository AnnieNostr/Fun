#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    int m;
    {
        n=get_int("Height: ");
        m=n-1;
    }
    while (n<1);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf(" ");
        }
        for(int j=n-m;j>0;j--)
        {
            printf("#");
        }
        printf("  ");
        for(int j=n-m;j>0;j--)
        {
            printf("#");
        }
        m=m-1;
        printf("\n");
    }
}
