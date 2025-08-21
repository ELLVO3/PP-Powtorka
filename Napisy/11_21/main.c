#include <stdio.h>
#include <stdlib.h>

int length(const char *txt)
{
    int i = 0;
    while(txt[i] != 0)
    {
        i++;
    }
    return i;
}

char *toLowerNew(const char *txt)
{
    int dl = length(txt);
    int i = 0;
    char *temp = malloc((dl + 1) * sizeof(char));

    while(i < dl)
    {
        temp[i] = txt[i];
        if(txt[i] >= 'A' && txt[i] <= 'Z')
        {
            temp[i] += 32;
        }
        i++;
    }
    temp[dl] = 0;
    return temp;
}

int main()
{
    const char txt[] = "ALekSanDrA";

    char *result = toLowerNew(txt);

    printf("%s\n", txt);
    printf("Pomniejszenie: %s\n", result);

    return 0;
}
