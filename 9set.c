#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void input();
void output();
void setunion();
void intersection();
void difference();
int n,m,a[]={0,0,0,0,0,0,0,0,0},b[]={0,0,0,0,0,0,0,0,0};
void main()
{
    int choice;
    do
    {
     printf("\n 1.Input  2.Output  3.Union  4.Inersection  5.Difference 6.Exit \n");
     printf("Enter your choice: ");
     scanf("%d",&choice);
     switch(choice)
     {
        case 1:input();
               break;
        case 2:output();
               break;
        case 3:setunion();
               break;
        case 4:intersection();
                break;
        case 5:difference();
                break;  
        case 6:exit (0);
               break;
        default:printf("Invalid choice!!!");      
     }
    }while(choice!=6);
}

void input()
{
    int i,x;
    printf("Enter the number of bits in A: ");
    scanf("%d",&n);
    printf("Enter the values: \n");
    for(i=0;i<n;i++)
    {
    scanf("%d",&x);
    a[x-1]=1;
    }
   
    printf("\nEnter the number of bits in B: ");
    scanf("%d",&m);
    printf("Enter the values:\n ");
    for(i=0;i<m;i++)
    {
    scanf("%d",&x);
    b[x-1]=1;
    }
}

void output()
{
    int i,j;
     printf("\nValues of 1st set: ");
    for(i=0;i<9;i++)
    printf("%d ",a[i]);
   
    printf("\nValues of 2st set: ");
    for(i=0;i<9;i++)
    printf("%d ",b[i]);
   
}

void setunion()
{
    int i,c[10];
   
    for(i=0;i<9;i++)
    {
    if(a[i]==0 && b[i]==0)
        c[i]=0;
    else
        c[i]=1;
    }
    for(i=0;i<9;i++)
    printf("%d",c[i]);
}

void intersection()
{
    int i,c[10];
    for(i=0;i<9;i++)
   {
    if(a[i]==1 && b[i]==1 )
        c[i]=1;
    else
       c[i]=0;
    }
    for(i=0;i<9;i++)
    printf("%d",c[i]);
}

void difference()
{
    int i,c[10],d[10];
    for(i=0;i<9;i++)
    {
        if(b[i]==0)
           d[i]=1;
        else
           d[i]=0;
    }
    for(i=0;i<9;i++)
   {
    if(a[i]==1 && d[i]==1 )
        c[i]=1;
    else
       c[i]=0;
    }
    for(i=0;i<9;i++)
    printf("%d",c[i]);
}
