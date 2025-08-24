#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

int sumOdd(struct element *list)
{
    int sum = 0;

    while(list != NULL)
    {
        if(list->x % 2 != 0)
        {
            sum += list->x;
        }
        list = list->next;
    }
    return sum;
}

void printList(struct element *list)
{
    while(list != NULL)
    {
        printf("%d\n", list->x);
        list = list->next;
    }
    printf("---\n");
}

int main()
{
    struct element *list = malloc(sizeof(struct element));

    list->x = 1;
    list->next = malloc(sizeof(struct element));
    list->next->x = 2;
    list->next->next = malloc(sizeof(struct element));
    list->next->next->x = 3;
    list->next->next->next = NULL;

    printList(list);

    printf("%d\n", sumOdd(list));

    return 0;
}
