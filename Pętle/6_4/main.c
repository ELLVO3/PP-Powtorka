#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;

    int silnia = 1;

    printf("Podaj nieujemna liczbe calkowita: ");
    scanf("%d", &a);

    if(a < 0)
    {
        printf("Podana liczba nie jest liczba calkowita.");
    }

    else{
        for(int i = 1; i <= a; i++){
            silnia *= i;
        }
        printf("Silnia z podanej liczby to: %d", silnia);
    }

    return 0;
}
