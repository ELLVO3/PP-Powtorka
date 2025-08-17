#include <stdio.h>
#include <stdlib.h>

int modifyAndSum(int (*modifier)(int), int number1, int number2)
{
    return modifier(number1) + modifier(number2);
}

int modifier(int x)
{
    return -x;
}

int main()
{
    printf("%d\n", modifyAndSum(modifier, -5, -5));

    return 0;
}
