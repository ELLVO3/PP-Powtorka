#include <stdio.h>
#include <stdlib.h>

struct node {
    int i;
    struct node * next;
};

int isSquare(int n)
{
    if(n < 0)
    {
        return 0;
    }

    for(int i =0; i*i <= n; i++)
    {
        if(i * i == n)
        {
            return 1;
        }
    }
    return 0;
}

void printSquares(struct node *list)
{
    while(list != NULL)
    {
        if(isSquare(list->i))
        {
            printf("%d\n", list->i);
        }
        list = list->next;
    }
}

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
        printf("%d\n", ptr->i);
        ptr = ptr->next;
    }
    printf("---\n");
}

int main()
{
    struct node *list = malloc(sizeof(struct node));

    list->i = 4;
    list->next = malloc(sizeof(struct node));
    list->next->i = 5;
    list->next->next = malloc(sizeof(struct node));
    list->next->next->i = 6;
    list->next->next->next = malloc(sizeof(struct node));
    list->next->next->next->i = -34;
    list->next->next->next->next = malloc(sizeof(struct node));
    list->next->next->next->next->i = 0;
    list->next->next->next->next->next = malloc(sizeof(struct node));
    list->next->next->next->next->next->i = 25;
    list->next->next->next->next->next->next = malloc(sizeof(struct node));
    list->next->next->next->next->next->next->i = 11;
    list->next->next->next->next->next->next->next = NULL;

    printList(list);

    printSquares(list);

    return 0;
}
