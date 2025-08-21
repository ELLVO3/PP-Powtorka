#include <stdio.h>
#include <stdlib.h>

int length(char *txt)
{
    int i = 0;
    while(txt[i] != 0)
    {
        i++;
    }
    return i;
}

char *copyEveryThird(char *txt)
{
    int i = 0;
    int j = 0;

    char *temp = malloc(length(txt) + 1);

    while(txt[i] != 0)
    {
        if(i%3 == 0)
        {
            temp[j] = txt[i];
            j++;
        }
        i++;
    }
    temp[j] = 0;
    return temp;
}

int main()
{
    char txt[] = "ABCXYZ";

    printf("%s\n", txt);

    printf("%s\n", copyEveryThird(txt));

    return 0;
}
