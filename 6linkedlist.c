#include<stdio.h>
#include<stdlib.h>

struct node
{
    int value;
    struct node *link;
};
typedef struct node node1;
void in_b();
void in_e();
void in_bw();
void del_b();
void del_e();
void del_bw();
void display();
node1 *nptr;
node1 *start=NULL;
node1 *create();
void main()
{
    int ch,wish;

    do
    {
       printf("\n\n\nLinked list implementation\n\n\n\n\n1.insert at beginning\n\n2.insert at end\n\n3.insert in between\n\n4.delete from beginning\n\n5.delete from end\n\n6.delete in between\n\n7.display\n\n8.exit\n\n\nenter your choice : ");
       scanf("%d",&ch);
       switch(ch)
        {
          case 1:in_b();
             break;
          case 2:in_e();
             break;
          case 3:in_bw();
             break;
          case 4:del_b();
             break;
          case 5:del_e();
             break;
          case 6: del_bw();
              break;
          case 7:display();
             break;
          case 8:exit(0);
             break;
          default:printf("\ninvalid choice");
       }
       printf("\nDo you wish to continue ?(1/0)\n");
       scanf("%d",&wish);
   
   }while(wish==1);

   

}
node1 *create()
{
    node1 *nptr=(node1*)malloc(sizeof(node1));
    if(nptr==NULL)
    {
       printf("memory overflow");
       return 0;
    }
    else
       return nptr;
}

void in_b()
  {
     int val;
     node1 *nptr=create();
     printf("enter element");
     scanf("%d",&val);
     nptr->value=val;
     if(start==NULL)
       {
    start=nptr;
    nptr->link=NULL;
       }
     else
       {
    nptr->link=start;
    start=nptr;
       }
   }

void in_e()
   {
     node1 *temp,*nptr=create();
     int val;
     printf("enter element");
     scanf("%d",&val);
     nptr->value=val;
     nptr->link=NULL;
     temp=start;
     while(temp->link!=NULL)
       {
     temp=temp->link;
       }
    temp->link=nptr;
}

void in_bw()
    {
     node1 *temp,*nptr=create();
     int val,pos,i;
     printf("enter element and position to be inserted ");
     scanf("%d %d",&val,&pos);
     nptr->value=val;
     nptr->link=NULL;
     temp=start;
     if(pos==1)
       {
    nptr->link=start;
    start=nptr;
       }
     else
       {
    for(i=1;i<pos-1;i++)
       {
         temp=temp->link;
       }
     nptr->link=temp->link;
     temp->link=nptr;
       }
    }

void display()
    {
      node1 *temp;
      if(start==NULL)
    printf("LIST EMPTY!!\n");
      temp=start;
      while(temp!=NULL)
       {
     printf("%d ",temp->value);
     temp=temp->link;
       }
    }

void del_b()
   {
     node1 *temp;
     if(start==NULL)
       printf("LIST EMPTY\n");
     else
       {
     temp=start;
     start=start->link;
     free(temp);
       }
    }

void del_e()
    {
      node1 *temp,*prev;
      temp=start;
     while(temp->link!=NULL)
    {
     prev=temp;
     temp=temp->link;
    }
     prev->link=NULL;
     free(temp);
   }

void del_bw()
   {
    node1 *temp,*prev;
    int i,pos;
    printf("enter position of the node to be deleted");
    scanf("%d",&pos);
    temp=start;
    if(pos==1)
       start=start->link;
    for(i=1;i<pos;i++)
      {
        prev=temp;
        temp=temp->link;
      }
     prev->link=temp->link;
     free(temp);
    }