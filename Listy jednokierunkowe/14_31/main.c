#include <stdio.h>
#include <stdlib.h>

struct node {
    int i;
    struct node * next;
};

int compareLastElem(struct node *list1, struct node *list2)
{
    if(list1->next == NULL || list2->next == NULL)
    {
        return 0;
    }

    struct node *temp1 = list1->next;
    struct node *temp2 = list2->next;

    while(temp1->next != NULL)
    {
        temp1 = temp1->next;
    }

    while(temp2->next != NULL)
    {
        temp2 = temp2->next;
    }

    struct node *last1 = malloc(sizeof(struct node));
    struct node *last2 = malloc(sizeof(struct node));

    last1->i = temp1->i;
    last1->next = NULL;

    last2->i = temp2->i;
    last2->next = NULL;

    if(last1->i == last2->i)
    {
        return 1;
    }
    return 0;
}

void printList(struct node *list)
{
    struct node *ptr = list->next;

    while(ptr != NULL)
    {
        printf("%d\n", ptr->i);
        ptr = ptr->next;
    }
    printf("---\n");
}

int main()
{
    struct node *list1 = malloc(sizeof(struct node));
    list1->next = malloc(sizeof(struct node));

    list1->next->i = 3;
    list1->next->next = malloc(sizeof(struct node));
    list1->next->next->i = 4;
    list1->next->next->next = malloc(sizeof(struct node));
    list1->next->next->next->i = 5;
    list1->next->next->next->next = NULL;

    printList(list1);

    struct node *list2 = malloc(sizeof(struct node));
    list2->next = malloc(sizeof(struct node));

    list2->next->i = 6;
    list2->next->next = malloc(sizeof(struct node));
    list2->next->next->i = -4;
    list2->next->next->next = malloc(sizeof(struct node));
    list2->next->next->next->i = 5;
    list2->next->next->next->next = NULL;

    printList(list2);

    printf("%d\n", compareLastElem(list1, list2));

    return 0;
}
