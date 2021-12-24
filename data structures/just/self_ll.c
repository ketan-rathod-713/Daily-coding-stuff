#include<stdio.h>
#include<conio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node create_newnode(struct node *s){
    struct node *ptr;
    if(s==NULL){
    ptr =(struct node*)malloc(sizeof(struct node));
    ptr->next=NULL;
    s=ptr;
    }
    else{
    
    }
    return *s;
}


struct node* starting(struct node *s,int data){
    struct node *ptr,*temp;
    if(s==NULL){
    ptr =(struct node*)malloc(sizeof(struct node));
    ptr->next=NULL;
    ptr->data=data;
    s=ptr;
    }
    else{
        ptr = s;
     while(ptr->next!=NULL)
     ptr = ptr->next;
     
     struct node *new =(struct node*)malloc(sizeof(struct node));
     new->data=data;
     new->next=NULL;
     //set links
     ptr->next->next = new;
    
       }
       return s;
}


int main(){
//menu driven program
struct node *s;
int n;

int ndata,nd;
int k=1;
printf("Enter the no. of nodes\n");
scanf("%d",&nd);
while(nd--){
    printf("Enter %d node data : ",k++);
    scanf("%d",&ndata);
   s =starting(s,ndata);

}




//menu

printf("WHAT YOU WANT TO DO\n1.Insert node at the end of the linked list\n2.Insert a node at the front of the linked list\n3.Insert a node such that linked list is in ascending order\n4.Delete the first node oof linked list\n5.Delete a node before specified location\n6.Delete a node after specified position\nENTER -1 TO EXIT\n");
scanf("%d",&n);
while (n!=-1)
{
    switch (n)
    {
    case 1:
        //functions
        break;
    case 2:
       
    break;
    case 3:

    break;
    case 4:
    //functions
    break;
    case 5:
       
    break;
    case 6:

    break;
    
    default:
        break;
    }
}

return 0;
}