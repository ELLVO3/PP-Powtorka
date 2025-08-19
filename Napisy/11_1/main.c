#include <stdio.h>
#include <stdlib.h>

int length(char napis[])
{
    int counter = 0;
    for(int i = 0; napis[i] != 0; i++)
    {
        counter++;
    }
    return counter;
}

int main()
{
    char napis[] = "Hello";

    printf("%d\n", length(napis));

    return 0;
}
