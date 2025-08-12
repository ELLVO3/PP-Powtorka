#include <stdio.h>
#include <stdlib.h>

int main()
{
    int previous, current, next;

    int i;
    int counter = 0;

    printf("Podaj 10 liczb calkowitych: ");
    scanf("%d", &previous);

    if(previous <= 0){
        printf("Liczba musi byc dodatnia");
        return -1;
    }

    scanf("%d", &current);

    if(current <= 0){
        printf("Liczba musi byc dodatnia");
        return -1;
    }

    for(i = 3; i <= 10; i++)
    {
        scanf("%d", &next);
        if(next <= 0){
            printf("Liczba musi byc dodatnia");
            return -1;
        }

        if(current < (previous + next) / 2){
            counter++;
        }

        previous = current;
        current = next;

        printf("Liczb spelniajacych nierownosc jest: %d\n", counter);
    }

    return 0;
}
