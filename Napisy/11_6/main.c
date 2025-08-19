#include <stdio.h>
#include <stdlib.h>

void toLowerNew(char napis[])
{
    for(int i = 0; napis[i] != 0; i++)
    {
        if(napis[i] >= 65 && napis[i] <= 90)
        {
            napis[i] += 32;
        }
    }
}

int main()
{
    char napis[] = "HALT";

    printf("%s\n", napis);
    toLowerNew(napis);
    printf("%s\n", napis);

    return 0;
}
