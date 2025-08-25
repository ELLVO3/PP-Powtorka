#include <stdio.h>
#include <stdlib.h>

struct elem {
    int a;
    struct elem * next;
};

void doubleLast(struct elem *list)
{
    if(list->next == NULL)
    {
        return;
    }

    struct elem *ptr = list->next;

    while(ptr->next != NULL)
    {
        ptr = ptr->next;
    }

    struct elem *doubled = malloc(sizeof(struct elem));

    doubled->a = ptr->a;
    doubled->next = NULL;

    ptr->next = doubled;
}

void printList(struct elem *list)
{
    struct elem *ptr = list->next;

    while(ptr != NULL)
    {
        printf("%d\n", ptr->a);
        ptr = ptr->next;
    }
    printf("---\n");
}

int main()
{
    struct elem *list = malloc(sizeof(struct elem));
    list->next = malloc(sizeof(struct elem));

    list->next->a = 3;
    list->next->next = malloc(sizeof(struct elem));
    list->next->next->a = 4;
    list->next->next->next = malloc(sizeof(struct elem));
    list->next->next->next->a = 5;
    list->next->next->next->next = NULL;

    printList(list);

    doubleLast(list);

    printList(list);

    return 0;
}
