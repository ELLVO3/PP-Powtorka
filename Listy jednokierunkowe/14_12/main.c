#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

void addLast(struct element *list, int a)
{
    struct element *current = list;

    while(current->next != NULL)
    {
        current = current->next;
    }

    current->next = malloc(sizeof(struct element));
    current->next->x = a;
    current->next->next = NULL;

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
    list->next->x = 1;
    list->next->next = malloc(sizeof(struct element));
    list->next->next->x = -7;
    list->next->next->next = malloc(sizeof(struct element));
    list->next->next->next->x = 3;
    list->next->next->next->next = NULL;

    printList(list);

    addLast(list, -5);

    printList(list);

    return 0;
}
