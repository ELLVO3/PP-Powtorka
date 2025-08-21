#include <stdio.h>
#include <stdlib.h>

void rmLower(char *txt)
{
    int i = 0;
    int j = 0;
    while(txt[i] != 0)
    {
        if(txt[i] < 97 || txt[i] > 122)
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
    char txt[] = "Agg1";

    printf("%s\n", txt);

    rmLower(txt);

    printf("%s\n", txt);

    return 0;
}
