#include <stdio.h>
#include <stdlib.h>

void strNcopy(char nap1[], char nap2[], int n)
{
    int i = 0;
    while(i < n && nap1[i] != 0)
    {
        nap2[i] = nap1[i];
        i++;
    }
    nap2[i] = 0;
}

int main()
{
    char nap1[] = "kopiujTONIE";
    char nap2[20];

    printf("%s, %s\n", nap1, nap2);
    strNcopy(nap1, nap2, 6);
    printf("%s, %s\n", nap1, nap2);

    return 0;
}
