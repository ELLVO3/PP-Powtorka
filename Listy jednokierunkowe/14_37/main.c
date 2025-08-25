#include <stdio.h>
#include <stdlib.h>

struct node {
    int y;
    struct node * next;
};

void addTwoElsAtTheBeginning(struct node *list, int a, int b)
{
    struct node *elB = malloc(sizeof(struct node));
    elB->y = b;
    elB->next = list->next;

    struct node *elA = malloc(sizeof(struct node));
    elA->y = a;
    elA->next = elB;

    list->next = elA;
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
        printf("%d\n", ptr->y);
        ptr = ptr->next;
    }
    printf("---\n");
}

int main()
{
    struct node *list = malloc(sizeof(struct node));
    list->next = malloc(sizeof(struct node));

    list->next->y = 3;
    list->next->next = malloc(sizeof(struct node));
    list->next->next->y = 4;
    list->next->next->next = malloc(sizeof(struct node));
    list->next->next->next->y = 5;
    list->next->next->next->next = NULL;

    printList(list);

    addTwoElsAtTheBeginning(list, 1,2);

    printList(list);

    return 0;
}
