#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

struct element *removeList(struct element *list)
{
    struct element *current = list;
    struct element *next;

    while(current != NULL)
    {
        next = current->next;
        free(current);
        current = next;
    }
    return NULL;
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
    struct element * list = malloc(sizeof(struct element));

    list->x = 2;
    list->next = malloc(sizeof(struct element));
    list->next->x = -5;
    list->next->next = malloc(sizeof(struct element));
    list->next->next->x = 3;
    list->next->next->next = NULL;

    printList(list);

    list = removeList(list);

    printList(list);

    return 0;
}
