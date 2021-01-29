#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;

struct node *ptr;
};

typedef struct node NODE;
void push();
void pop();
void peek();
void display();

NODE *top=NULL,*temp,*t;
int ch,item,wish;

int main()
{

do
{
printf("\nMENU:\n1.Push\n2.Pop\n3.Display\n4.Peek\n5.Exit\nEnter your choice: ");
scanf("%d",&ch);
switch(ch)
{
case 1: push();
        break;
        
case 2: pop(); 
        break;
        
case 3: display();
        break;
        
case 4: peek();
        break;
        
case 5: exit(0);

default:
        printf("\nWrong Choice");
        break;
}
printf("\n\n Do you wish to continue 1/0 : ");
scanf("%d",&wish);
}while(wish==1);
return 0;
}


//push
void push()
{
	
temp=(NODE*)malloc(sizeof(NODE));
printf("\nEnter the item: ");
scanf("%d",&item);
temp->data=item;
if(top==NULL)
{
temp->ptr=NULL;
top=temp;
}
else
{
temp->ptr=top;
top=temp;

}
}

//pop
void pop()
{
if(top==NULL)
printf("\nDeletion is not possible");
else if(top->ptr==NULL)
{
temp=top;
top=NULL;
printf("\nPoped item is %d",temp->data);
free(temp);
}
else
{
temp=top;
top=top->ptr;
printf("\nPoped item is %d",temp->data);
free(temp);
}	
}


//peek
void peek()
{
	if(top==NULL)
	printf("\n\n**No Element**");
	else
	{
	temp=top;
   
	printf("Top element is : %d",temp->data);
    }
}

//display
void display()
{
if(top==NULL)
printf("\nStack is empty");
else
{
printf("\nElements are:");
for(t=top;t!=NULL;t=t->ptr)

printf(" %d",t->data);

}
}
