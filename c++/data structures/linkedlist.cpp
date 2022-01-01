// what are the things to have in ll
//

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

struct node
{
    int val;
    struct node *next;
};

struct node *createnode(int data)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->val = data;
    newnode->next = NULL;

    return newnode;
}

createll()
{
    cout << "enter the no of nodes" << endl;
    int n;
    cin >> n;
    cout << "enter data" << endl;
    struct node *head;
    struct node *first = (struct node *)malloc(sizeof(struct node));
    for (int i = 0; i < n; i++)
    {
        int data;
        cin >> data;
    }
}

int main()
{

    return 0;
}
