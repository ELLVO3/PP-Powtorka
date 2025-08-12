#include <stdio.h>
#include <stdlib.h>

void sumToPtr(const int *ptr1, const int *ptr2, int *ptr3)
{
    *ptr3 = *ptr1 + *ptr2;
}

int main()
{
    int a = 5;
    int b = 71;

    int result;

    sumToPtr(&a, &b, &result);

    printf("%d\n", result);

    return 0;
}
