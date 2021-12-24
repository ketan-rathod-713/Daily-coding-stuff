#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *first_node(struct node *head)
{
    int first_node_data;
    struct node *temp = malloc(sizeof(struct node));
    printf("\nEnter 1 node data : ");
    scanf("%d", &first_node_data);
    temp->data = first_node_data;
    temp->next = NULL;
    return temp;
}
struct node *create_end_node_list(struct node *ptr, int data)
{
    struct node *new = malloc(sizeof(struct node));
    new->data = data;
    new->next = NULL;
    ptr->next = new;
    return new;
}
struct node *create_list(struct node *head)
{
    int n;
    printf("\nEnter Number of Node : ");
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
        printf("\nEnter %d node data : ", i + 1);
        scanf("%d", &node_data);
        ptr = create_end_node_list(ptr, node_data);
    }
    return head;
}
struct node *insert_front_node(struct node *head)
{
    int front_node_data;
    printf("Enter front_node_data : ");
    scanf("%d", &front_node_data);
    struct node *front_node = malloc(sizeof(struct node));
    front_node->data = front_node_data;
    front_node->next = NULL;
    front_node->next = head;
    head = front_node;
    return head;
}
struct node *insert_last_node(struct node *head)
{
    int last_node_data;
    printf("Enter front_node_data : ");
    scanf("%d", &last_node_data);
    struct node *last_node = malloc(sizeof(struct node));
    last_node->data = last_node_data;
    last_node->next = NULL;
    struct node *ptr = head;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = last_node;
    return head;
}
struct node *sorting_linkedlist(struct node *head)
{
    struct node *node1, *node2;
    int temp;
    node1 = head;
    while (node1->next != NULL)
    {
        node2 = node1->next;
        while (node2 != NULL)
        {
            if (node1->data > node2->data)
            {
                int temp = node1->data;
                node1->data = node2->data;
                node2->data = temp;
            }
            node2 = node2->next;
        }
        node1 = node1->next;
    }
    return head;
}
struct node *insert_node_ascending_order(struct node *head)
{
    head = sorting_linkedlist(head);
    int insert_data;
    printf("\nEnter insert_data : ");
    scanf("%d", &insert_data);
    struct node *ascending_order = malloc(sizeof(struct node));
    ascending_order->data = insert_data;
    ascending_order->next = NULL;
    struct node *temp = head;
    if (head == NULL || insert_data < head->data)
    {
        ascending_order->next = head;
        head = ascending_order;
    }
    else
    {
        while (temp->next != NULL && temp->next->data < insert_data)
        {
            temp = temp->next;
        }
        ascending_order->next = temp->next;
        temp->next = ascending_order;
    }
    return head;
}
struct node *delete_first_node(struct node *head)
{
    struct node *temp = head;
    head = head->next;
    free(temp);
    temp = NULL;
    return head;
}
struct node *delete_node_before_position(struct node *head)
{
    struct node *temp1, *temp2 = NULL;
    temp1 = head;
    int position;
    printf("\nEnter your position : ");
    scanf("%d", &position);
    if (position == 1)
    {
        return head;
    }
    else if (position == 2)
    {
        head = head->next;
        free(temp1);
        temp1 = NULL;
    }
    else
    {
        while (position > 2)
        {
            temp2 = temp1;
            temp1 = temp1->next;
            position--;
        }
        temp2->next = temp1->next;
        free(temp1);
        temp1 = NULL;
    }
    return head;
}
struct node *delete_node_after_position(struct node *head)
{
    struct node *temp = head, *temp2;
    int position;
    printf("\nEnter your position : ");
    scanf("%d", &position);
    while (position > 1)
    {
        temp = temp->next;
        position--;
    }
    if (temp->next == NULL)
    {
        return head;
    }
    else
    {
        temp2 = temp->next;
        temp->next = temp2->next;
        free(temp2);
        temp2 = NULL;
    }
    return head;
}
void display(struct node *head)
{
    struct node *ptr = head;
    while (ptr != NULL)
    {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
}
int main()
{
    struct node *head = NULL;
    head = create_list(head);
    display(head);
    printf("\n1. Insert a node at the front of the linked list. \n2. Insert a node at the end of the linked list.\n3. Insert a node such that linked list is in ascending order.(according to info. Field)\n4. Delete a first node of the linked list.\n5. Delete a node before specified position.\n6.Delete a node after specified position.\n7.dispaly()");
    int n;
    do
    {
        int number;
        printf("\nchoose number : ");
        scanf("%d", &number);
        switch (number)
        {
        case 1:
            head = insert_front_node(head);
            break;
        case 2:
            head = insert_last_node(head);
            break;
        case 3:
            head = insert_node_ascending_order(head);
            break;
        case 4:
            head = delete_first_node(head);
            break;
        case 5:
            head = delete_node_before_position(head);
            break;
        case 6:
            head = delete_node_after_position(head);
            break;
        case 7:
            display(head);
            break;
        default:
            printf("Linked list is Empty");
            break;
        }
        printf("\n0 and 1 : ");
        scanf("%d", &n);
    } while (n != 0);
    return 0;
}
