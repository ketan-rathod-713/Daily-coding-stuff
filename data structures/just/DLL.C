#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *prev;
    int data;
    struct node *next;
};
struct node *first_node(struct node *head)
{
    int first_node_data;
    printf("\nEnter a 1 node data : ");
    scanf("%d", &first_node_data);
    struct node *N = (struct node *)malloc(sizeof(struct node));
    N->prev = NULL;
    N->data = first_node_data;
    N->next = NULL;

    return N;
}
struct node *complate_list(struct node *ptr, int data)
{
    struct node *new1 = (struct node *)malloc(sizeof(struct node));
    new1->prev = NULL;
    new1->data = data;
    new1->next = NULL;

    ptr->next = new1;
    new1->prev = ptr;
    return new1;
}
struct node *create_list(struct node *head)
{
    int n;
    printf("How many node of linked list : ");
    scanf("%d", &n);

    if (n == 0)
    {
        return head;
    }
    head = first_node(head);
    struct node *ptr = head;

    int node_data;
    for (int i = 1; i < n; i++)
    {
        printf("\nEnter a %d node data : ", i + 1);
        scanf("%d", &node_data);
        ptr = complate_list(ptr, node_data);
    }
    return head;
}

struct node *Insert_node_front(struct node *head)
{
    int new_node_data;
    printf("\nEnter insert  front node data : ");
    scanf("%d", &new_node_data);

    struct node *N = (struct node *)malloc(sizeof(struct node));
    N->prev = NULL;
    N->data = new_node_data;
    N->next = NULL;

    N->next = head;
    head->prev = N;
    head = N;

    return head;
}

struct node *Insert_node_last(struct node *head)
{
    struct node *temp = head;

    int last_node_data;
    printf("\nEnter insert last node data : ");
    scanf("%d", &last_node_data);

    struct node *N = (struct node *)malloc(sizeof(struct node));
    N->prev = NULL;
    N->data = last_node_data;
    N->next = NULL;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = N;
    N->prev = temp;

    return head;
}
struct node *delete_node_last(struct node *head)
{
    struct node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->prev->next = NULL;
    free(temp);
    temp = NULL;

    return head;
}

struct node *delete_before_specified_position(struct node *head)
{
    struct node *temp1 = head;
    struct node *temp2 = NULL;

    int position;
    printf("\nEnter a position : ");
    scanf("%d", &position);

    if (position == 1)
    {
        return head;
    }
    else if (position == 2)
    {
        head = head->next;
        head->prev = NULL;
        free(temp1);
        temp1 = NULL;
        return head;
    }
    else
    {
        while (position > 1)
        {
            temp2 = temp1;
            temp1 = temp1->next;
            position--;
        }

        temp2->prev->next = temp1;
        temp1->prev = temp2->prev;
        free(temp2);
        temp2 = NULL;

        return head;
    }
}
void display(struct node *head)
{
    if (head == NULL)
    {
        printf("Linked list is Empty");
        exit(0);
    }
    struct node *temp = head;

    while (temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
}

int main()
{
    struct node *head = NULL;
    head = create_list(head);
    display(head);

    printf("\n");
    printf("\n1. Insert a node at the front of the linked list. \n2. Insert a node at the end of the linked list. \n3. Delete a last node of the linked list. \n4. Delete a node before specified position. \n5. display()");
    printf("\n");
    int n, choise;
    do
    {
        printf("\nEnter your choise : ");
        scanf("%d", &choise);
        switch (choise)
        {
        case 1:
            head = Insert_node_front(head);
            break;
        case 2:
            head = Insert_node_last(head);
            break;
        case 3:
            head = delete_node_last(head);
            break;
        case 4:
            head = delete_before_specified_position(head);
            break;
        case 5:
            display(head);
            break;
        }
        printf("\n0 and 1 : ");
        scanf("%d", &n);
    } while (n != 0);

    return 0;
}
