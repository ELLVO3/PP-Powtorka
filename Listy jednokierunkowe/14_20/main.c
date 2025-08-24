#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

struct element *removeFirst(struct element *list)
{
    if(list == NULL || list->next == NULL)
    {
        return NULL;
    }

    struct element *temp = list->next;

    list->next = temp->next;
    free(temp);
    return list;

};

void printList(struct element *list)
{
    if(list == NULL || list->next == NULL)
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
    list->next->next->x = 0;
    list->next->next->next = malloc(sizeof(struct element));
    list->next->next->next->x = 3;
    list->next->next->next->next = malloc(sizeof(struct element));
    list->next->next->next->next->x = -6;
    list->next->next->next->next->next = NULL;

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
