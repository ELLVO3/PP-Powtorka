#include <stdio.h>
#include <stdlib.h>

int isLetter(char letter)
{
    if((letter >= 65 && letter <= 90) || (letter >= 97 && letter <= 122))
    {
        return 1;
    }
    return 0;
}

void removeLastLetter(char *txt)
{
    int i = 0;
    int k = -1; // indeks ostatniej litery

    while(txt[i] != 0)
    {
        if(isLetter(txt[i]))
        {
            k=i;
        }
        i++;
    }

    if(k == -1)
    {
        return;
    }

    i = k;

    while(txt[i] != 0)
    {
        txt[i] = txt[i+1];
        i++;
    }

}

int main()
{
    char txt[] = "12xyz#9";

    printf("%s\n", txt);

    removeLastLetter(txt);

    printf("%s\n", txt);

    return 0;
}
