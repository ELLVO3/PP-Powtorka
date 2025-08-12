#include <stdio.h>
#include <stdlib.h>

int *initInits()
{
    int *temp = malloc(sizeof(int) * 3);

    if(temp == NULL)
    {
        return NULL;
    }

    *temp = 5;
    *(temp + 1) = -12;
    *(temp + 2) = 33;

    return (temp + 1);
}

int main()
{
    int *ptr = initInits();

    printf("%d\n", *(ptr - 1));

    printf("%d\n", *(ptr));

    printf("%d\n", *(ptr + 1));

    free(ptr-1);

    return 0;
}
