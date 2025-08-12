#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;

    printf("POdaj liczbe calkowita: ");
    scanf("%d", &a);

    if(a & 1)
    {
        printf("Liczba jest nieparzysta");
    }

    else{
        printf("Liczba jest parzysta");
    }

    return 0;
}
