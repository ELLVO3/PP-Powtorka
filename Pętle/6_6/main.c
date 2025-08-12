#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int i;

    printf("Podaj nieujemna liczbe calkowita: ");
    scanf("%d", &n);

    if(n <= 0){
        printf("Podana liczba jest mniejsza lub rowna zero.");
        return 1;
    }

    else{
        while(i * i <= n){
            i++;
        }
    }

    printf("Najblizsza liczba calkowita pierwiastka z %d to: %d", n, i - 1);

    return 0;
}
