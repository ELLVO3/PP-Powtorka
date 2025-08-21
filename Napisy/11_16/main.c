#include <stdio.h>
#include <stdlib.h>

int w16(wchar_t *txt)
{
    int i = 0;
    int liczba = 0;

    for(i = 0; i < 3; i++)
    {
        if(txt[i] < '0' || txt[i] > '9')
        {
            return 0;
        }
        liczba = liczba * 10 + (txt[i] - L'0');
    }
    return liczba;
}

int main()
{
    wchar_t txt[] = L"123";

    wprintf(L"%ls\n\n%d\n", txt, w16(txt));

    return 0;
}
