#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Wprowadz liczbe calkowita: ");

    scanf("%d", &n);

    if(n < 0)
    {
        printf("Podana liczba jest ujemna");
    }

    else if(n > 0)
    {
        printf("Podana liczba jest dodatnia");
    }

    else{
        printf("Podana liczba jest rowna 0");
    }

    return 0;
}
