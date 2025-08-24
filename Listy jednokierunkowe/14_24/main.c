#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

void removePreLast(struct element *list)
{
    if(list->next == NULL || list->next->next == NULL)
    {
        return;
    }

    struct element *prev = list;
    struct element *current = list->next;
    struct element *next = current->next;

    while(next->next != NULL)
    {
        prev = current;
        current = next;
        next = next->next;
    }
    prev->next = next;
    free(current);
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
    list->next->next->x = 4;
    list->next->next->next = malloc(sizeof(struct element));
    list->next->next->next->x = 5;
    list->next->next->next->next = malloc(sizeof(struct element));
    list->next->next->next->next->x = 6;
    list->next->next->next->next->next = NULL;

    printList(list);

    removePreLast(list);

    printList(list);

    return 0;
}
