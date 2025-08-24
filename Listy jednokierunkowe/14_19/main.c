#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

struct element *removeFirst(struct element *list)
{
    if(list == NULL)
    {
        return NULL;
    }

    struct element * current = list;
    list = list->next;
    free(current);
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
    struct element *list = malloc(sizeof(struct element));

    list->x = 3;
    list->next = malloc(sizeof(struct element));
    list->next->x = -7;
    list->next->next = malloc(sizeof(struct element));
    list->next->next->x = 6;
    list->next->next->next = malloc(sizeof(struct element));
    list->next->next->next->x = 12;
    list->next->next->next->next = NULL;

    printList(list);

    list = removeFirst(list);

    printList(list);

    list = removeFirst(list);

    printList(list);

    list = removeFirst(list);

    printList(list);

    list = removeFirst(list);

    printList(list);

    return 0;
}
