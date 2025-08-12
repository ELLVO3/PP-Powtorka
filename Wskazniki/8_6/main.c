#include <stdio.h>
#include <stdlib.h>

float *initFloats()
{
    float *temp = malloc(sizeof(float) * 3);

    if(temp == NULL)
    {
        return NULL;
    }

    *temp = 4.5;
    *(temp + 1) = 2.3;
    *(temp + 2) = -4.2;

    return temp;
}

int main()
{
    float *ptr = initFloats();

    printf("%f\n", *ptr);

    printf("%f\n", *(ptr + 1));
    printf("%f\n", *(ptr + 2));

    free(ptr);

    return 0;
}
