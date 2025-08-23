#include <stdio.h>
#include <stdlib.h>

enum Day{PON, WT, SR, CZW, PT, SB, NDZ};

void print_days(enum Day arg, int n)
{
    if(n <= 0)
    {
        return;
    }

    if(arg == PON)
    {
        printf("Poniedzialek\n");
    }

    else if(arg == WT)
    {
        printf("Wtorek\n");
    }

    else if(arg == SR)
    {
        printf("Sroda\n");
    }

    else if(arg == CZW)
    {
        printf("Czwartek\n");
    }

    else if(arg == PT)
    {
        printf("Piatek\n");
    }

    else if(arg == SB)
    {
        printf("Sobota\n");
    }

    else{
        printf("Niedziela\n");
    }

    print_days((arg + 1) % 7, n - 1);
}

int main()
{
    print_days(CZW, 6);

    return 0;
}
