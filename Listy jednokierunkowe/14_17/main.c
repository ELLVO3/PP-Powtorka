#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

struct element *lastEven(struct element *list)
{
    struct element *temp = list;
    struct element *lastEv = NULL;

    while(temp != NULL)
    {
        if(temp->x % 2 == 0)
        {
            lastEv = temp;
        }
        temp = temp->next;
    }
    return lastEv;
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

    struct element *result = lastEven(list);

    if(result != NULL)
    {
        printf("%d --> %p\n", result->x, result);
    }

    else{
        printf("Brak elementu parzystego\n");
    }

    return 0;
}
