#include<stdio.h>
#include<conio.h>

int a[20];
int top=-1;

void pop(){
    if(top!=-1)
    top--;
    else
    printf("STACK IS ALREADY EMPTY\n");
    printf("WHAT YOU WANT TO DO\n");
}

void push(){
    int data;
    printf("ENTER DATA TO BE PUSHED\n");
    scanf("%d",&data);
    top++;
    a[top]=data;
    printf("WHAT YOU WANT TO DO\n");
}

void peek(){
    if(top!=-1){
        printf("%d\n",a[top]);
    } 
    else{
        printf("STACK IS EMPTY\n");
    }
    printf("WHAT YOU WANT TO DO\n");
}


void display(){
    
    if(top!=-1){
       int i=top+1;
       while(i--){
           printf("%d ",a[i]);
       }
       
    }
    else
    printf("STACK IS EMPTY");
    printf("\n");
    printf("WHAT YOU WANT TO DO\n");
}

int main(){
//push pop peep change display 
int n;
//menu
printf("WHAT YOU WANT TO DO\n1.PUSH\n2.POP\n3.PEEK\n4.DISPLAY\nENTER -1 TO EXIT FROM PROFRAM\n");
while (n!=-1)
{
  

scanf("%d",&n);
switch (n)
{
case 1:
    push();
    break;
case 2:
    pop();
    break;
case 3:
    peek();
    break;
case 4:
    display();
    break; 

default:

    break;
}
}

return 0;
}