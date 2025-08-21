#include <stdio.h>
#include <stdlib.h>

void wStrCopyNew(wchar_t *txt1, wchar_t *txt2)
{
    int i = 0;
    while(txt1[i] != 0)
    {
        txt2[i] = txt1[i];
        i++;
    }
    txt2[i] = 0;
}

int main()
{
    wchar_t txt1[] = L"Hello";
    wchar_t txt2[20];


    wprintf(L"%s %s\n", txt1, txt2);

    wStrCopyNew(txt1, txt2);

    wprintf(L"%s %s\n", txt1, txt2);

    return 0;
}
