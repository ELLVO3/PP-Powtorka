#include <stdio.h>
#include <stdlib.h>

struct element{
    int i;
    struct element * next;
};

int main()
{
    struct element a;
    struct element b;
    struct element c;

    a.i = 1;
    b.i = 2;
    c.i = 3;

    a.next = &b;
    b.next = &c;
    c.next = NULL;

    struct element *ptr = &a;

    while(ptr != NULL)
    {
        printf("%d\n", ptr->i);
        ptr = ptr->next;
    }

    return 0;
}
