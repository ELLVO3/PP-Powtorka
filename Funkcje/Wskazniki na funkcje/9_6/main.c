#include <stdio.h>
#include <stdlib.h>

int applyCondition(int (*condition)(int), int (*action)(int), int value)
{
    if(condition(value) == 1)
    {
        return action(value);
    }
    return value;
}

int dodatnia(int x)
{
    if(x < 0)
    {
        return 0;
    }
    return 1;
}

int square(int x)
{
    return x * x;
}

int main()
{
    printf("%d\n", applyCondition(dodatnia, square, 1));

    return 0;
}
