#include<stdio.h>
#include<stdlib.h>
int s[100],choice,n,top,x,i;
void push();
void pop();
void display();
void peak();
int main()
{
    top=-1;
    printf("\n Enter the size:");
    scanf("%d",&n);
    while(1)
    {
      printf("\n 1.Push \n 2.Pop\n 3.Display \n 4.Peak \n 5.Exit");
      printf("\n Enter your choice : ");
      
        scanf("%d", &choice);
        switch(choice)
        {
            case 1: push();
            break;
            case 2: pop();
            break;
            case 3: display();
            break;
	    case 4: peak();
	     break;
	case 5:
	     exit(0);
	      
            default: printf("Wrong choice \n");
        } 
    } 
}

void push()
{
    if(top>=n-1)
    {
        printf("\n Stack overflow");
        
    }
    else
    {
        printf(" Enter a value to be pushed:");
        scanf("%d",&x);
        top++;
        s[top]=x;
    }
}
void pop()
{
    if(top<=-1)
    {
        printf("\n Stack underflow");
    }
    else
    {
        printf("\n The popped elements is %d",s[top]);
        top--;
    }
}
void display()
{
    if(top>=0)
    {
        printf("\n The elements in stack \n");
        for(i=top; i>=0; i--)
            printf("\n%d",s[i]);
    }
    else
    {
        printf("\n The stack is empty");
    }
   
}
void peak(){
  printf("The top element is the stack is %d ",s[top]);
}
