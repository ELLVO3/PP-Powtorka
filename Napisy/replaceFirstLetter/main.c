#include <stdio.h>
#include <stdlib.h>

void replaceFirstLetter(char *txt)
{
    for(int i = 0; txt[i] != 0; i++)
    {
        if(txt[i] >= 97 && txt[i] <= 122)
        {
            txt[i] -= 32;
            break;
        }
    }
}

int main()
{
    char txt[] = "adam";

    printf("%s\n", txt);

    replaceFirstLetter(txt);

    printf("%s\n", txt);

    return 0;
}
