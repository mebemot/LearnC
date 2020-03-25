#include <stdio.h>
#define ARRAYSIZE 10;

int valueCount(int values[], int arraysize);
void tsort(int values[], int valueCount);

int main()
{
    int i;
    int values[ARRAYSIZE];
    for (i = 0; i < 10; ++i)
    {
        values[i] = 0;
    }

    while (valueCount(values, ARRAYSIZE) > 0)
    {
        printf("%s\n", values);
    }
}

int valueCount(int values[], int arraysize)
{
    int i;
    int c;
    for (i = 0; i < arraysize && (c = getchar() != EOF); ++i)
    {
        values[i] = c - 0;
    }
}

void tsort(int values[], int valueCount)
{
}
