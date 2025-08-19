#include <stdio.h>
#include <stdlib.h>

int countNums(char napis[])
{
    int counter = 0;
    for(int i = 0; napis[i] != 0; i++)
    {
        if(napis[i] >= 48 && napis[i] <= 57)
        {
            counter++;
        }
    }
    return counter;
}

int main()
{
    char napis[] = "5tr1ng";

    printf("%d\n", countNums(napis));

    return 0;
}
