#include <stdio.h>
#include <stdlib.h>

struct node {
    int a;
    struct node * next;
};

struct node *addTwoElsAtTheBeginning(struct node *list, int a, int b)
{
    struct node *elB = malloc(sizeof(struct node));
    elB->a = b;
    elB->next = list;

    struct node *elA = malloc(sizeof(struct node));
    elA->a = a;
    elA->next = elB;

    return elA;
};

void printList(struct node *list)
{
    if(list == NULL)
    {
        printf("Lista jest pusta\n---\n");
        return;
    }

    struct node *ptr = list;

    while(ptr != NULL)
    {
        printf("%d\n", ptr->a);
        ptr = ptr->next;
    }
    printf("---\n");
}

int main()
{
    struct node *list = malloc(sizeof(struct node));

    list->a = 3;
    list->next = malloc(sizeof(struct node));
    list->next->a = 4;
    list->next->next = malloc(sizeof(struct node));
    list->next->next->a = 5;
    list->next->next->next = NULL;

    printList(list);

    list = addTwoElsAtTheBeginning(list, 1, 2);

    printList(list);

    return 0;
}
