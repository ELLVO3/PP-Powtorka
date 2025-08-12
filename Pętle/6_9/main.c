#include <stdio.h>
#include <stdlib.h>

int main()
{
    int previous, current, next;

    int i;
    int counter = 0;
    int n;

    printf("Ile liczb chcesz dac? Nie moze byc mniej niz 3: ");
    scanf("%d", &n);

    if(n < 3){
        printf("Nie ma takich liczb.");
        return -1;
    }

    printf("Podaj %d liczb: ", n);

    scanf("%d", &previous);
    if(previous <= 0){
        printf("Liczba nie moze byc ujemna.");
        return -1;
    }

    scanf("%d", &current);
    if(current <= 0){
        printf("Liczba nie moze byc ujemna.");
        return -1;
    }

    for(i = 3; i <= n; i++)
    {
        scanf("%d", &next);
        if(next <= 0){
            printf("Liczba nie moze byc ujemna.");
            return -1;
        }

        if(current * 2 < previous + next){
            counter++;
        }

        previous = current;
        current = next;

        printf("Liczb spelniajacych nierownosc jest: %d\n", counter);
    }

    return 0;
}
