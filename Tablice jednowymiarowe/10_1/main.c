#include <stdio.h>
#include <stdlib.h>

void findMaxValue(int numbers[], int size)
{
    if(size <= 0)
    {
        printf("Pusta tablica");
        exit(-1);
    }

    int max = numbers[0];

    for(int i = 0; i < size; i++)
    {
        if(numbers[i] > max)
        {
            max = numbers[i];
        }
    }

    printf("Maksymalna wartosc: %d\n", max);

}

int main()
{
    int tab[] = {2,4,6,8};

    findMaxValue(tab, 4);

    return 0;
}
