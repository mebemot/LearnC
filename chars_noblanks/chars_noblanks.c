#include <stdio.h>
#define MAXLINE 1000 /*max input line size*/

int mgetline(char line[], int lim);
int length(char s[]);
void trim(char s[]);

/*print longest line*/
int main()
{
    int CurrentLength;     /*current line length*/
    int CurrentMax;        /*current max line length*/
    char line[MAXLINE];    /*current input line*/
    char longest[MAXLINE]; /*longest line saved here*/

    CurrentMax = 0;

    while (mgetline(line, MAXLINE) > 0)
    {
        trim(line);
        printf("%s\n", line);
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

/*length: returns length of input*/
int length(char s[])
{
    int i;

    for (i = 0; s[i] != '\0'; i++)
    {
        /*do nuffin*/
    }

    return i;
}

/*trim right:trim trailing blanks*/
void trim(char s[])
{
    int i = length(s) -1;

    while (s[i] == ' '|| s[i] == '\t' || s[i] == '\n')
    {
        --i;
    }
    if (s[i] > 0)
    {
        s[i + 1] = '\0';
    }

    return;
}
