#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

int main(void)
{
    int grade=0;
    int letters=0;
    int spaces=0;
    int words=0;
    int symbols=0;
    int sentences=0;
    int a=0;

    string text=get_string("Enter Text:  ");
    printf("\n");

    printf("%s\n",text);

    int nl=count_letters(text);
    printf("%i letters\n",nl);

    int nw=count_words(text);
    printf("%i words\n",nw);

    int ns=count_sentences(text);
    printf("%i sentences\n",ns);

    grade=round(0.0588*(nl*100/nw)-0.296*(ns*100/nw)-15.8);

    if (grade<1)
    {
        printf("Before Grade 1\n");
    }
    else if (grade>16)
    {
        printf("Grade 16+\n");
    }
    else
    printf("Grade %i\n",grade);
}

int count_letters(string text)
{
    int a=0;
    int b=0;
    int nl;
    int total=strlen(text);

    while (a<total)
    {
        if (text[a]>64 && text[a]<91)
        {
            a++;
            b++;
        }
        else if (text[a]>96 && text[a]<123)
        {
            a++;
            b++;
        }
        else
        a++;
    }
    nl=b;
    printf("Total length: %i\n",total);
    return nl;
}
int count_words(string text)
{
    int a=0;
    int b=0;
    int nw;
    int total=strlen(text);

    while (a<total)
    {
        if (text[a]==32)
        {
            a++;
            b++;
        }
        else
        a++;
    }
    nw=b+1;
    return nw;
}

int count_sentences(string text)
{
    int a=0;
    int b=0;
    int ns;
    int total=strlen(text);

    while (a<total)
    {
        if (text[a]==33||text[a]==46||text[a]==63)
        {
            a++;
            b++;
        }
        else
        a++;
    }
    ns=b;
    return ns;
}
