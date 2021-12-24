#include<stdio.h>
#include<conio.h>

int main(){
// binary search requires sorted array 
int a[20],n,l,u,number,position;
printf("enter the no. of elements in array\n");
scanf("%d",&n);
for (int i = 0; i < n; i++)
{
    scanf("%d",&a[i]);
}
printf("enter the number to be searched \n");
scanf("%d",&number);
//at first l and u will be 0 and n
l=0;
u=n;


while(1){ //here l is lower limit and u is upper one
position=((u+l)/2);
   if(a[position]) == number){
       
       printf("got it on %d",&position);
       break;
   } else 
   if(a[position]>number){
       l=position+1;
   } else
   if(a[position]<number){
       u=position-1;
   }

}


return 0;
}