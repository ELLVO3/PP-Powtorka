#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

struct element *removePreLast(struct element *list)
{
    if(list == NULL || list->next == NULL)
    {
        return NULL;
    }

    struct element *prev = NULL;
    struct element *current = list;
    struct element *next = list->next;

    while(next->next != NULL)
    {
        prev = current;
        current = next;
        next = next->next;
    }

    if(prev == NULL)
    {
        free(current);
        return next;
    }

    prev->next = next;
    free(current);
    return list;
}

void printList(struct element *list)
{
    if (list == NULL) {
        printf("Lista jest pusta\n---\n");
        return;
    }
    struct element *ptr = list;
    while (ptr != NULL) {
        printf("%d\n", ptr->x);
        ptr = ptr->next;
    }
    printf("---\n");
}

int main()
{
    struct element *list = malloc(sizeof(struct element));
    list->x = 1;
    list->next = malloc(sizeof(struct element));
    list->next->x = 2;
    list->next->next = malloc(sizeof(struct element));
    list->next->next->x = 3;
    list->next->next->next = malloc(sizeof(struct element));
    list->next->next->next->x = 4;
    list->next->next->next->next = NULL;

    printList(list);

    removePreLast(list);

    printList(list);

    return 0;
}
