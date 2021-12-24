#include<stdio.h>
#include<conio.h>

struct node{
    int data;
    struct node *next;
};

struct node *create_ll(struct node *start){

    struct node *new_node,*ptr;
    int num;
    // printf("\n Enter -1 to end");
    printf("\n enter the data :");
    scanf("%d",&num);

     
        new_node = (struct node*)malloc(sizeof(struct node));
        new_node->data = num;
        if(start == NULL){
            new_node->next = NULL;
            start =new_node;
        } else{
            ptr = start;
            while(ptr->next!=NULL)
            ptr = ptr->next;
            ptr->next = new_node ;
            new_node->next = NULL;
        }
        // printf("enter the data :");
        // scanf("%d",num);
    
    return start;

}

struct node *display(struct node *start){
    struct node *ptr;
    ptr = start;
    while(ptr!=NULL){
        printf("\t %d",ptr->data);
        ptr = ptr->next;
    }
    return start;
}

struct node *insert_beg(struct node *start){
    struct node *new_node;
    int num;
    printf("enter the data :");
    scanf("%d",&num);
    new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = num;
    new_node->next = start;
    start = new_node;
    return start;
}

struct node *insert_end(struct node *start){
    struct node *new_node;
    int num;
    struct node *ptr;
    printf("enter the data :");
    scanf("%d",&num);
    new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = num;
    new_node->next=NULL;
    ptr = start;
    while(ptr->next!=NULL){
    ptr = ptr->next;
    }
    ptr->next =new_node;
    return start;
}

struct node *insert_before(struct node *start){
    struct node *new_node , *ptr ,*preptr;
    int num,value;
    printf("enter the data :");
    scanf("%d",&num);
    printf("enter the value before which the data has to be insertedd");
    scanf("%d",&value);
   
    new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = num;
    ptr=start;
    while(ptr->data!=value){    // our focus is data not ptr
        preptr = ptr;
        ptr=ptr->next;
    }
    // preptr->next=ptr; // will it work instead of that in while loop
    
    new_node->next = ptr;
    preptr->next = new_node;
    return start;
}



struct node *delete_beg(struct node *start){
    struct node *ptr;
    ptr = start;
    start = start->next;
    free(ptr);
    return start;
}

// write different funcn to delete in diff. posn

struct node *delete_list(struct node *start){ // need to understand 
    struct node *ptr;
    if(start!=NULL){
        ptr = start;
        while(ptr!=NULL){
        printf("%d is to be deleted next",ptr->data);
        start = delete_beg(ptr);
        ptr = start;
        }
    }
    return start;
}

int main(int args, char *argv[]){
struct node *start;
start =NULL;
int option;
do{
    printf("\t main menu\n");
     printf(" 1. create list \n");
      printf(" 2. display the list \n");
       printf(" 3.add the node at the begining\n");
        printf(" 4.add node at the end\n");
         printf(" 5.add node before a given node \n");
         // printf(" 6.add a node after a given node\n");
        //   printf(" 7.delete a node from begining\n");
            // printf(" 8.delete a node from the end\n");
            //  printf(" 9.delete a given node \n");
            //   printf(" 10.delete a node after given nide\n");
             //  printf(" 11.delete entir list\n");
              //  printf(" 12.sort\n");
                 printf(" 13.exit\n");
                  printf(" \n\nenter your option\n");
                  scanf("%d",&option);
                  switch (option)
                  {
case 1:
start = create_ll(start);
printf("\nlinked list craeated");
break;
 case 2: start = display(start);
 break;
 case 3: start = insert_beg(start);
 break;
 case 4: start = insert_end(start);
 break;
 case 5: start = insert_before(start);
 break;
//  case 6: start = insert_after(start);
//  break;
//  case 7: start = delete_beg(start);
//  break;
//  case 8: start = delete_end(start);
//  break;
//  case 9: start = delete_node(start);
//  break;
//  case 10: start = delete_after(start);
//  break;
//  case 11: start = delete_list(start);
//  printf(“\n LINKED LIST DELETED”);
//  break;
//  case 12: start = sort_list(start);
//  break;  


                  
 default:
     break;
 }

}while(option!=13);
getch();
return 0;

return 0;
}