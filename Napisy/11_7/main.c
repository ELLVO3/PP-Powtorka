#include <stdio.h>
#include <stdlib.h>

void toUpperNew(char napis[])
{
    for(int i = 0; napis[i] != 0; i++)
    {
        if(napis[i] >= 97 && napis[i] <= 122)
        {
            napis[i] -= 32;
        }
    }
}

int main()
{
    char napis[] = "halt";

    printf("%s\n", napis);
    toUpperNew(napis);
    printf("%s\n", napis);

    return 0;
}
