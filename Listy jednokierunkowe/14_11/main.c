#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

struct element *addLast(struct element *list, int a)
{
    struct element *last = malloc(sizeof(struct element));

    last->x = a;
    last->next = NULL;

    if(list == NULL)
    {
        return last;
    }

    struct element *ptr = list;

    while(ptr->next != NULL)
    {
        ptr = ptr->next;
    }

    ptr->next = last;
    return list;
};

void printList(struct element *list)
{
    if(list == NULL)
    {
        printf("Lista jest pusta\n---\n");
        return;
    }

    struct element *ptr = list;

    while(ptr != NULL)
    {
        printf("%d\n", ptr->x);
        ptr = ptr->next;
    }
    printf("---\n");
}

int main()
{
    struct element *list = NULL;

    printList(list);

    list = addLast(list, 3);

    printList(list);

    list = addLast(list, 2);

    printList(list);

    list = addLast(list, 1);

    printList(list);

    return 0;
}
