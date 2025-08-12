#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int suma = 0;

    printf("Wczytaj liczbe calkowita: ");
    scanf("%d", &n);

    if(n < 0){
        n = -n;
    }

    if(n == 0)
    {
        printf("0\n");
    }

    while(n > 0)
    {
        int cyfra = n%10;
        suma += cyfra;
        printf("%d\n", cyfra);
        n/=10;
    }

    printf("Suma cyfr: %d\n", suma);

    return 0;
}
