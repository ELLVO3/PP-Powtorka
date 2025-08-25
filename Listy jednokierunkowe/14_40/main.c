#include <stdio.h>
#include <stdlib.h>

struct node {
    int val;
    struct node * next;
};

void ABS(struct node *list)
{
    if(list->next == NULL)
    {
        return;
    }

    struct node *temp = list->next;

    while(temp != NULL)
    {
        if(temp->val < 0)
        {
            temp->val *= -1;
        }
        temp = temp->next;
    }
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
        printf("%d\n", ptr->val);
        ptr = ptr->next;
    }
    printf("---\n");
}

int main()
{
    struct node *list = malloc(sizeof(struct node));
    list->next = malloc(sizeof(struct node));

    list->next->val = -3;
    list->next->next = malloc(sizeof(struct node));
    list->next->next->val = 4;
    list->next->next->next = NULL;

    printList(list);

    ABS(list);

    printList(list);

    return 0;
}
