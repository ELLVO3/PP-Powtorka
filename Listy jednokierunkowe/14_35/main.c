#include <stdio.h>
#include <stdlib.h>

struct node {
    int x;
    struct node * next;
};

int sumOddEls(struct node *list)
{
    int suma = 0;

    if(list->next == NULL)
    {
        return 0;
    }

    struct node *temp = list->next;

    while(temp != NULL)
    {
        if(temp->x %2 != 0)
        {
            suma += temp->x;
        }
        temp = temp->next;
    }
    return suma;
}

void printList(struct node *list)
{
    if(list->next == NULL)
    {
        printf("Lista jest pusta\n---\n");
        return;
    }

    struct node *ptr = list->next;

    while(ptr != NULL)
    {
        printf("%d\n", ptr->x);
        ptr = ptr->next;
    }
    printf("---\n");
}

int main()
{
    struct node *list = malloc(sizeof(struct node));
    list->next = malloc(sizeof(struct node));

    list->next->x = 3;
    list->next->next = malloc(sizeof(struct node));
    list->next->next->x = 4;
    list->next->next->next = malloc(sizeof(struct node));
    list->next->next->next->x = 5;
    list->next->next->next->next = NULL;

    printList(list);

    printf("%d\n", sumOddEls(list));

    return 0;
}
