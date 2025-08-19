#include <stdio.h>
#include <stdlib.h>

int lexComp(char txt1[], char txt2[])
{
    int i = 0;
    while(txt1[i] != 0 && txt2[i] != 0)
    {
        if(txt1[i] < txt2[i])
        {
            return 1;
        }

        else if(txt1[i] > txt2[i])
        {
            return 0;
        }
        i++;
    }

    if(txt1[i] == 0 && txt2[i] != 0)
    {
        return 1;
    }

    return 0;
}

int main()
{
    char n1[] = "alappp";
    char n2[] = "ala";

    printf("%d\n", lexComp(n1, n2));

    return 0;
}
