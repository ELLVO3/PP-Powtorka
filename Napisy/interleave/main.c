#include <stdio.h>
#include <stdlib.h>

int length(char *txt)
{
    int i = 0;
    while(txt[i] != 0)
    {
        i++;
    }
    return i;
}

void interleave(char *txt1, char *txt2, char *txt3)
{
    int dl1 = length(txt1);
    int dl2 = length(txt2);

    int i = 0; // index do odczytania z txt1 i txt2
    int j = 0; // do zapisu w txt3

    while(i < dl1 && i < dl2)
    {
        txt3[j] = txt1[i];
        j++;
        txt3[j] = txt2[i];
        j++;
        i++;
    }

    while(i < dl1)
    {
        txt3[j] = txt1[i];
        j++;
        i++;
    }

    while(i < dl2)
    {
        txt3[j] = txt2[i];
        j++;
        i++;
    }
    txt3[j] = 0;
}

int main()
{
    char txt1[] = "Ada";
    char txt2[] = "12345";
    char txt3[20] = ".";

    printf("%s\n%s\n", txt1, txt2);

    interleave(txt1, txt2, txt3);

    printf("%s\n", txt3);

    return 0;
}
