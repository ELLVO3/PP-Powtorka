#include <stdio.h>
#include <stdlib.h>

struct node {
    int w;
    struct node * next;
};

int sumEven(struct node *list)
{
    int sum = 0;

    struct node *temp = list;

    while(temp != NULL)
    {
        if(temp->w %2 == 0)
        {
            sum += temp->w;
        }
        temp = temp->next;
    }
    return sum;
}

int compareEven(struct node *list1, struct node *list2)
{
    if(list1 == NULL || list2 == NULL)
    {
        return 0;
    }

    int sumL1 = sumEven(list1);
    int sumL2 = sumEven(list2);

    if(sumL1 == sumL2)
    {
        return 1;
    }
    return 0;
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
        printf("%d\n", ptr->w);
        ptr = ptr->next;
    }
    printf("---\n");
}

int main()
{
    struct node *list1 = malloc(sizeof(struct node));

    list1->w = 3;
    list1->next = malloc(sizeof(struct node));
    list1->next->w = 3;
    list1->next->next = malloc(sizeof(struct node));
    list1->next->next->w = 14;
    list1->next->next->next = malloc(sizeof(struct node));
    list1->next->next->next->w = 8;
    list1->next->next->next->next = NULL;

    printList(list1);

    struct node *list2 = malloc(sizeof(struct node));

    list2->w = 10;
    list2->next = malloc(sizeof(struct node));
    list2->next->w = 12;
    list2->next->next = malloc(sizeof(struct node));
    list2->next->next->w = -1;
    list2->next->next->next = malloc(sizeof(struct node));
    list2->next->next->next->w = -1;
    list2->next->next->next->next = NULL;

    printList(list2);

    printf("%d\n", compareEven(list1, list2));

    return 0;
}
