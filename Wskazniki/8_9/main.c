#include <stdio.h>
#include <stdlib.h>

void sqrCopy(const int *ptr1, int *ptr2)
{
    *ptr2 = *(ptr1) * *(ptr1);
}

int main()
{
    int result;
    int a = -5;

    sqrCopy(&a, &result);

    printf("%d\n", result);

    return 0;
}
