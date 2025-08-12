#include <stdio.h>
#include <stdlib.h>

int main()
{
    int suma;
    int n;
    int i = 0;

    printf("Wprowadz liczbe n: ");
    scanf("%d", &n);

    while(i < n)
    {
        i++;
        suma+=i;
    }

    printf("%d\n", suma);

    return 0;
}
