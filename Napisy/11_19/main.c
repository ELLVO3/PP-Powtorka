#include <stdio.h>
#include <stdlib.h>

int indexLower(char *txt)
{
    int i = 0;
    while(txt[i] != 0)
    {
        if(txt[i] >= 97 && txt[i] <= 122)
        {
            return i;
        }
        i++;
    }
    return 0;
}

int main()
{
    char txt1[] = "TAKjEST"; // 3
    char txt2[] = "";

    printf("%s\n", txt1);
    printf("%d\n", indexLower(txt1));

    printf("%s\n", txt2);
    printf("%d\n", indexLower(txt2));

    return 0;
}
