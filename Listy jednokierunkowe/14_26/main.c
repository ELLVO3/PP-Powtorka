#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

void removeList(struct element *list)
{
    if(list->next == NULL)
    {
        return;
    }

    struct element *current = list->next;
    struct element *next;

    while(current != NULL)
    {
        next = current->next;
        free(current);
        current = next;
    }
    list->next = NULL;
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

    removeList(list);

    printList(list);

    return 0;
}
