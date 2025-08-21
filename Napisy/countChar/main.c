#include <stdio.h>
#include <stdlib.h>

int length(char *txt)
{
    if(txt[0] == 0)
    {
        return 0;
    }
    return 1+length(++txt);
}

int countChar(char *txt, char ch)
{
    if(txt[0] == 0)
    {
        return 0;
    }

    if(txt[0] == ch)
    {
        return 1+countChar(++txt, ch);
    }

    return countChar(++txt, ch);
}

int main()
{
    char txt[] = "Hello World!";

    printf("%d\n", countChar(txt, 'l'));

    return 0;
}
