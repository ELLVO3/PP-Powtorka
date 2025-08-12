#include <stdio.h>
#include <stdlib.h>

int main()
{
    int liczba, kroki;

    printf("Podaj liczbe calkowita: ");
    scanf("%d", &liczba);

    printf("Podaj liczbe przesuniec: ");
    scanf("%d", &kroki);

    printf("Podana liczba %d z przesunieciem w prawo o %d krokow daje: %d", liczba, kroki, liczba >> kroki);

    return 0;
}
