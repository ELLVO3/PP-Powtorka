#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

struct element *findLastPos(struct element *list)
{
    struct element *temp = list->next;
    struct element *lastPos = NULL;

    while(temp != NULL)
    {
        if(temp->x > 0)
        {
            lastPos = temp;
        }
        temp = temp->next;
    }
    return lastPos;
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

    struct element *result = findLastPos(list);

    if(result != NULL)
    {
        printf("%d --> %p\n", result->x, result);
    }

    else{
        printf("Brak elementu dodatniego\n");
    }

    return 0;
}
