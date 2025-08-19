#include <stdio.h>
#include <stdlib.h>

void strCopyNew(char zrodlo[], char cel[])
{
    int i;
    while(zrodlo[i] != 0)
    {
        cel[i] = zrodlo[i];
        i++;
    }
    cel[i] = 0;
}

int main()
{
    char napis[] = "Hejo";
    char napis2[50];

    printf("%s, %s\n", napis, napis2);
    strCopyNew(napis, napis2);
    printf("%s, %s\n", napis, napis2);

    return 0;
}
