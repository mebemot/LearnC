#include <stdio.h>
#define MAXLINE 1000 /*max input line size*/

int mgetline(char line[], int lim);
void copy(char to[], char from[]);

/*print longest line*/
int main()
{
    int CurrentLength;     /*current line length*/
    int CurrentMax;        /*current max line length*/
    char line[MAXLINE];    /*current input line*/
    char longest[MAXLINE]; /*longest line saved here*/

    CurrentMax = 0;

    while ((CurrentLength = mgetline(line, MAXLINE)) > 0)
    {
        if (CurrentLength > CurrentMax)
        {
            CurrentMax = CurrentLength;
            copy(longest, line);
        }
    }
   
   while (CurrentMax > 0)
    {
        putchar(longest[CurrentMax]);
        --CurrentMax;
    }
    return 0;
}

/* getline: reads line and returns length*/
int mgetline(char line[], int lim)
{
    int c, i;

    for (i = 0; i < lim && (c = getchar()) != EOF && c != '\n'; ++i)
    {
        line[i] = c;
    }
    if (c == '\n')
    {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}

/*copy: copy 'from' into 'to' assuming to is big enough*/
void copy(char to[], char from[])
{
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
    {
        ++i;
    }
}
