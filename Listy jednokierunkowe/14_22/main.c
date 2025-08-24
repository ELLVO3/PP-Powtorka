#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

void removeLast(struct element *list)
{
    if(list->next == NULL)
    {
        return;
    }

    struct element *prev = list;
    struct element *current = list->next;

    while(current->next != NULL)
    {
        prev = prev->next;
        current = current->next;
    }
    free(current);
    prev->next = NULL;
}

void printList(struct element *list)
{
    if(list->next == NULL)
    {
        printf("Lista jest pusta\n---\n");
        return;
    }

    struct element *ptr = list->next;

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
    list->next = malloc(sizeof(struct element));

    list->next->x = 3;
    list->next->next = malloc(sizeof(struct element));
    list->next->next->x = -5;
    list->next->next->next = malloc(sizeof(struct element));
    list->next->next->next->x = -7;
    list->next->next->next->next = NULL;

    printList(list);

    removeLast(list);

    printList(list);

    return 0;
}
