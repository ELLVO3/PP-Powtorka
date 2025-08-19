#include <stdio.h>
#include <stdlib.h>

int cmpStrNew(char txt1[], char txt2[])
{
    int i = 0;
    while(txt1[i] != 0 && txt2 != 0)
    {
        if(txt1[i] != txt2[i])
        {
            return 0;
        }
        i++;
    }
    return 1;
}

int main()
{
    char n1[] = "Helps";
    char n2[] = "Hels";

    printf("%d\n", cmpStrNew(n1, n2));

    return 0;
}
