#include<stdio.h>
#include<conio.h>
#define size 20  // so that we dont face difficulty in future

int main(){
int n,position,b;
int a[size];
printf("Enter the no. of elements in array to insert\n");
scanf("%d",&n);
printf("enter the elements \n");
for (int i = 0; i < n; i++)
{
    scanf("%d",&a[i]);
}

// now searching

printf("number to search is ");
scanf("%d",&b); // b -- no. to search

for (int i = 0; i < n; i++)
{
    if(a[i]==b){
        position=i;
        printf("found %d on %d position ",b,position);
    }
}


return 0;
}