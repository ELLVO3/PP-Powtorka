#include <stdio.h>
#include <stdlib.h>

float *initFlts()
{
    float *temp = malloc(sizeof(float) * 4);

    if(temp == NULL)
    {
        return NULL;
    }

    *temp = .5;
    *(temp + 1) = 1.5;
    *(temp + 2) = 2.5;
    *(temp + 3) = 3.5;

    return temp + 3;
}

int main()
{
    float *ptr = initFlts();

    printf("%f\n", *ptr);

    printf("%f\n", *(ptr - 1));
    printf("%f\n", *(ptr - 2));
    printf("%f\n", *(ptr - 3));

    return 0;
}
