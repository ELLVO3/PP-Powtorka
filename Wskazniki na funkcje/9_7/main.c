#include <stdio.h>
#include <stdlib.h>

void executeSequence(void (*operation)(int), int count)
{
    for(int i = 1; i <= count; i++)
    {
        operation(i);
    }
}

void func(int a)
{
    printf("%d\n", a);
}

int main()
{
    executeSequence(func, 22);

    return 0;
}
