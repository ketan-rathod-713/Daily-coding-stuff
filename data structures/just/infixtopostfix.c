#include<stdio.h>
#include<conio.h>

char st[100],postfix[100];
int top=-1;

void push(char source[],char c){
    if(top==99)
    printf("overflow\n");
    else{
        top++;
        st[top]=c;
    }
}

char pop(){
    if(top==-1)
    printf("underflow\n");
    else{
        char c=st[top];
        top--;
        return c;
    }
}

int getpriority(char c){
    if(c=='*' || c=='/' || c=='%')
    return 1;
    else if(c=='+' || c=='-')
    return 0;
}



void infixtopostfix(char source[],char target[]){// here target is postfix
   char temp;
   int i=0,j=0;
   strcpy(target,"");


//make it at own then and only then i can understant i think or can get more confidence
   while(source[i]!='\0'){
       if(source[i]=='('){          //if left paranthesis came 
           push(st,source[i]);
           i++;
       }
       else {if(source[i]==')'){                  // if right paranthesis came
         while(top!=-1 && st[top]!='('){
             target[j]=pop();
             j++;
                                       }
            if(top==-1){
                printf("incorrect expression");
                exit(1);
                      }
                      temp=pop(st);
                      i++;
                                 }
       }

     
   }

}

int main(){
char infix;
int temp;

printf("enter the infix expression");
gets(infix);


return 0;
}