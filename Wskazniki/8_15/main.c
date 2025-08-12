#include <stdio.h>
#include <stdlib.h>

void absVal(int *a)
{
    if(*a < 0)
    {
        *(a) = *(a) * -1;
    }
}

int main()
{
    int x = -9;

    printf("Przed absVal: %d\n", x);

    absVal(&x);

    printf("Po absVal: %d\n", x);

    return 0;
}
