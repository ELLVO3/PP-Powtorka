#include <stdio.h>
#include <stdlib.h>

int calculateSquareRootFloor(int n)
{
    int i = 0;
    while(i * i <= n)
    {
        i++;
    }
    return i-1;
}

int main()
{
    printf("%d\n", calculateSquareRootFloor(4));
    printf("%d\n", calculateSquareRootFloor(63));
    printf("%d\n", calculateSquareRootFloor(1));
    printf("%d\n", calculateSquareRootFloor(0));
    printf("%d\n", calculateSquareRootFloor(65));

    return 0;
}
