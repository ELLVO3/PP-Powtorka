#include <stdio.h>
#include <stdlib.h>

void rmDigits(char *txt)
{
    int i = 0, j = 0;
    while(txt[i] != 0)
    {
        if(txt[i] <= 48 || txt[i] >= 57)
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
    char txt[] = "Abc123d";

    printf("%s\n", txt);

    rmDigits(txt);

    printf("%s\n", txt);

    return 0;
}
