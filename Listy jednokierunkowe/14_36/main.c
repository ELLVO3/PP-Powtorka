#include <stdio.h>
#include <stdlib.h>

struct elem {
    int x;
    struct elem * next;
};

void timesTwoEven(struct elem *list)
{
    if(list == NULL)
    {
        return;
    }

    struct elem *temp = list;

    while(temp != NULL)
    {
        if(temp->x > 0)
        {
            temp->x *= 2;
        }
        temp = temp->next;
    }
}

void printList(struct elem *list)
{
    if(list == NULL)
    {
        printf("Lista jest pusta\n---\n");
        return;
    }

    struct elem *ptr = list;

    while(ptr != NULL)
    {
        printf("%d\n", ptr->x);
        ptr = ptr->next;
    }
    printf("---\n");
}

int main()
{
    struct elem *list = malloc(sizeof(struct elem));

    list->x = -3;
    list->next = malloc(sizeof(struct elem));
    list->next->x = 2;
    list->next->next = malloc(sizeof(struct elem));
    list->next->next->x = -5;
    list->next->next->next = NULL;

    printList(list);

    timesTwoEven(list);

    printList(list);

    return 0;
}
