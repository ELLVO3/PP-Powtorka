#include <stdio.h>
#include <stdlib.h>

void strConcat(char *nap1, char *nap2, char *nap3)
{
    int i = 0;
    int j = 0;

    while(nap1[i] != 0)
    {
        nap3[i] = nap1[i];
        i++;
    }

    while(nap2[j] != 0)
    {
        nap3[i] = nap2[j];
        i++;
        j++;
    }

    nap3[i] = 0;
}

int main()
{
    char nap1[] = "Hello ";
    char nap2[] = "World";
    char nap3[20];

    printf("%s\n", nap1);
    printf("%s\n", nap2);

    strConcat(nap1, nap2, nap3);

    printf("%s\n", nap3);

    return 0;
}
