#include <stdio.h>
#include <stdlib.h>

void rmOdd(char *txt)
{
    int i = 0, j = 0;
    while(txt[i] != 0)
    {
        if(i%2 == 0)
        {
            txt[j] = txt[i];
            j++;
        }
        i++;
    }
    txt[j] = 0;
}

int main()
{
    char txt[] = "ABCDEFG";

    printf("%s\n", txt);

    rmOdd(txt);

    printf("%s\n", txt);

    return 0;
}
