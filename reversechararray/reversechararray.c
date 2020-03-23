#include <stdio.h>
#define MAXLINE 1000 /*max input line size*/

int mgetline(char line[], int lim);
int length(char s[]);
void reverse(char s[]);

/*print reversed input line by line*/
int main()
{
    char line[MAXLINE]; /*current input line*/

    while (mgetline(line, MAXLINE) > 0)
    {
        reverse(line);
        printf("%s\n", line);
    }

    return 0;
}

/* getline: reads line and returns length, returns 0 at EOF*/
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

/*reverse: reverses character string*/
void reverse(char s[])
{
    char c;
    int i;
    int j = 0;

    for (i = length(s) - 1; i > j; --i, ++j)
    {
        c = s[j];
        s[j] = s[i];
        s[i] = c;
    }
    return;
}

/*length: calculates current line length*/
int length(char s[])
{
    int i;

    for (i = 0; s[i] != '\0'; ++i)
    {
        //do nuffin
    }
    return i;
}