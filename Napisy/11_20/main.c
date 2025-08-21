#include <stdio.h>
#include <stdlib.h>

int countOdds(char *txt)
{
    int counter = 0;
    int i = 0;
    while(txt[i] != 0)
    {
        if(txt[i] >= 48 && txt[i] <= 57 && txt[i] %2 != 0)
        {
            counter++;
        }
        i++;
    }
    return counter;
}

int main()
{
    char txt[] = "Abc321";

    printf("%s\n", txt);
    printf("%d\n", countOdds(txt));

    return 0;
}
