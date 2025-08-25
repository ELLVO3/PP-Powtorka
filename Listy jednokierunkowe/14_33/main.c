#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node * next;
};

int sumOdd(struct node *list)
{
    int sum = 0;

    struct node *temp = list->next;

    while(temp != NULL)
    {
        if(temp->value %2 != 0)
        {
            sum += temp->value;
        }
        temp = temp->next;
    }
    return sum;
}

int compareOddSums(struct node *list1, struct node *list2)
{
    if(list1->next == NULL || list2->next == NULL)
    {
        return 0;
    }

    int sumL1 = sumOdd(list1);
    int sumL2 = sumOdd(list2);

    if(sumL1 == sumL2)
    {
        return 1;
    }
    return 0;
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
        printf("%d\n", ptr->value);
        ptr = ptr->next;
    }
    printf("---\n");
}

int main()
{
    struct node *list1 = malloc(sizeof(struct node));
    list1->next = malloc(sizeof(struct node));

    list1->next->value = -3;
    list1->next->next = malloc(sizeof(struct node));
    list1->next->next->value = 5;
    list1->next->next->next = malloc(sizeof(struct node));
    list1->next->next->next->value = 9;
    list1->next->next->next->next = malloc(sizeof(struct node));
    list1->next->next->next->next->value = 7;
    list1->next->next->next->next->next = NULL;

    printList(list1);

    struct node *list2 = malloc(sizeof(struct node));
    list2->next = malloc(sizeof(struct node));

    list2->next->value = 4;
    list2->next->next = malloc(sizeof(struct node));
    list2->next->next->value = 2;
    list2->next->next->next = malloc(sizeof(struct node));
    list2->next->next->next->value = 9;
    list2->next->next->next->next = malloc(sizeof(struct node));
    list2->next->next->next->next->value = 5;
    list2->next->next->next->next->next = NULL;

    printList(list2);

    printf("%d\n", compareOddSums(list1, list2));

    return 0;
}
