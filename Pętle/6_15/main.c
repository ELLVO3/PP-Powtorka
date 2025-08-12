#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Podaj kwote w pln: ");
    scanf("%d", &n);

    int ile5, ile2, ile1;

    while(n >= 5)
    {
        ile5++;
        n -= 5;
    }

    while(n >= 2)
    {
        ile2++;
        n -= 2;
    }

    while(n >= 1)
    {
        ile1++;
        n--;
    }

    printf("Reszta: 5pln x %d, 2pln x %d, 1pln x %d", ile5, ile2, ile1);

    return 0;
}
