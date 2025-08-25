#include <stdio.h>
#include <stdlib.h>

struct element {
    float value;
    struct element * next;
};

void ABS(struct element *list)
{
    if(list == NULL)
    {
        return;
    }

    struct element *temp = list;

    while(temp != NULL)
    {
        if(temp->value < 0)
        {
            temp->value *= -1;
        }
        temp = temp->next;
    }
}

void printList(struct element *list)
{
    if(list == NULL)
    {
        printf("Lista jest pusta\n---\n");
    }

    struct element *ptr = list;

    while(ptr != NULL)
    {
        printf("%.2f\n", ptr->value);
        ptr = ptr->next;
    }
    printf("---\n");
}

int main()
{
    struct element *list = malloc(sizeof(struct element));

    list->value = 3;
    list->next = malloc(sizeof(struct element));
    list->next->value = -4;
    list->next->next = malloc(sizeof(struct element));
    list->next->next->value = -5;
    list->next->next->next = NULL;

    printList(list);

    ABS(list);

    printList(list);
    return 0;
}
