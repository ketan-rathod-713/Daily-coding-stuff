#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *first = NULL, *second = NULL;
struct node *enqueue(struct node *first)
{
    int node_data;
    printf("\nEnter a node data : ");
    scanf("%d", &node_data);
    struct node *new = malloc(sizeof(struct node));
    new->data = node_data;
    new->next = NULL;

    if (first == NULL && second == NULL)
    {
        first = second = new;
    }
    else
    {
        second->next = new;
        second = new;
    }
    return first;
}
struct node *dequeue(struct node *first)
{
    if (first == NULL && second == NULL)
    {
        printf("\nQueue is Empty");
    }
    else
    {
        printf("\nThe fisrt node delete : %d", first->data);
        struct node *temp = first;
        first = first->next;
        free(temp);
        temp = NULL;
    }
    return first;
}
struct node *peek(struct node *first)
{
    if (first == NULL && second == NULL)
    {
        printf("\nQueue is Empty");
    }
    else
    {
        printf("\nPeek value is a : %d",first->data);
    }
    return first;
}
void display(struct node *first)
{
    struct node *temp = first;
    if (first == NULL && second == NULL)
    {
        printf("\nQueue is Empty");
    }
    else
    {
        while (temp != NULL)
        {
            printf("%d\t", temp->data);
            temp = temp->next;
        }
    }
}
int main()
{
    printf("\n1.enqueue()\n2.dequeue().\n3.peek()\n4.display()");
    int n;
    do
    {
        int choose;
        printf("\nEnter your choise : ");
        scanf("%d", &choose);
        switch (choose)
        {
        case 1:
            first = enqueue(first);
            break;
        case 2:
            first = dequeue(first);
            break;
        case 3:
            first = peek(first);
            break;
        case 4:
            display(first);
            break;
        }
        printf("\n0 and 1 : ");
        scanf("%d", &n);
    } while (n != 0);
    return 0;
}
