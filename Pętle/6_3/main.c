#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    int suma = 0;

    do{
        printf("Wprowadz liczbe n: ");
        scanf("%d", &n);
        suma += n;
    } while(n != 0);

    printf("%d\n", suma);

    return 0;
}
