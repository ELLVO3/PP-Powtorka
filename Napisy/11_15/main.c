#include <stdio.h>
#include <stdlib.h>

void wStrConcat(wchar_t *txt1, wchar_t *txt2, wchar_t *txt3)
{
    int i = 0;
    int j = 0;

    while(txt1[i] != 0)
    {
        txt3[i] = txt1[i];
        i++;
    }

    while(txt2[j] != 0)
    {
        txt3[i] = txt2[j];
        j++;
        i++;
    }

    txt3[i] = 0;
}

int main()
{
    wchar_t txt1[] = L"Hello ";
    wchar_t txt2[] = L"World!";
    wchar_t txt3[20];

    wprintf(L"%s\n%s\n", txt1, txt2);

    wStrConcat(txt1, txt2, txt3);

    wprintf(L"Tablica znakow 3: %s\n", txt3);

    return 0;
}
