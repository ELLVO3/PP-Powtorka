#include <stdio.h>
#include <stdlib.h>

struct node {
    int a;
    struct node * next;
};

int compareLastElem(struct node *list1, struct node *list2)
{
    if(list1 == NULL || list2 == NULL)
    {
        return 0;
    }

    struct node *temp1 = list1;
    struct node *temp2 = list2;

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

    last1->a = temp1->a;
    last1->next = NULL;

    last2->a = temp2->a;
    last2->next = NULL;

    if(last1->a == last2->a)
    {
        return 1;
    }
    return 0;
}

void printList(struct node *list)
{
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
    struct node *list1 = malloc(sizeof(struct node));

    list1->a = 3;
    list1->next = malloc(sizeof(struct node));
    list1->next->a = 4;
    list1->next->next = malloc(sizeof(struct node));
    list1->next->next->a = 5;
    list1->next->next->next = NULL;

    printList(list1);

    struct node *list2 = malloc(sizeof(struct node));

    list2->a = -3;
    list2->next = malloc(sizeof(struct node));
    list2->next->a = -4;
    list2->next->next = malloc(sizeof(struct node));
    list2->next->next->a = 5;
    list2->next->next->next = NULL;

    printList(list2);

    printf("%d\n", compareLastElem(list1, list2));

    return 0;
}
