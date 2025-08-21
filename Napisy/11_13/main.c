#include <stdio.h>
#include <stdlib.h>

void cutStr(char *txt, int n, int m)
{
    int i = 0;
    int j = 0;
    while(txt[i] != 0)
    {
        if(i < n || i > m)
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
    char txt[] = "Konstatynopol";

    printf("%s\n", txt);

    cutStr(txt, 8, 13);

    printf("%s\n", txt);

    return 0;
}
