#include <stdio.h>
#define MAXLINE 1000
/*prints line length and line*/

int mgetline(char s[], int lim);

int main()
{
    char line[MAXLINE];
    int i;

    while ((i = mgetline(line, MAXLINE)) > 0)
    {
        printf("[%s] [%d]\n", line, i);
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
