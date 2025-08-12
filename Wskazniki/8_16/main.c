#include <stdio.h>
#include <stdlib.h>

void swap(int *wsk1, int *wsk2)
{
    int temp = *wsk1;
    *wsk1 = *wsk2;
    *wsk2 = temp;
}

int main()
{
    int x = 5;
    int y = 8;

    printf("Przed zamiana: %d, %d\n", x, y);

    swap(&x, &y);

    printf("Po zamianie: %d, %d\n", x, y);

    return 0;
}
