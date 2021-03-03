#include<stdio.h>
struct disjoint
{
int n;
int parent[10];
int rank[10];
}dis;
void makeset()
{
 int i;
 for(i=0;i<dis.n;i++)
 {
  dis.parent[i]=i;
  dis.rank[i]=0;
 }
}
void display()
{
    int i;
printf("\nparent array ");
for(i=0;i<dis.n;i++)
{
printf("%d ",dis.parent[i]);

}
printf("\nrank array ");
for(i=0;i<dis.n;i++)
{
printf("%d ",dis.rank[i]);
}
printf("\n");
}

int find(int x)
{

if(dis.parent[x]!=x)
{
dis.parent[x]=find(dis.parent[x]);
}
    return dis.parent[x];

}
void Union(int x,int y)
{

int xset=find(x);
int yset=find(y);
if(xset==yset)
return ;
if(dis.rank[xset]<dis.rank[yset])
{
dis.parent[xset]=yset;
dis.rank[xset]=-1;
}
else if(dis.rank[xset]>dis.rank[yset])
{
dis.parent[yset]=xset;
dis.rank[yset]=-1;
}
else
{
dis.parent[yset]=xset;
dis.rank[xset]=dis.rank[xset]+1;
dis.rank[yset]=-1;
}

}
int main()
{
int x,y,n;
printf("enter size of elements:");
scanf("%d",&dis.n);
makeset();
int ch;
do
{
printf("___disjoint set___");
printf("\n1.Union\n2.find\n3.display\n");
printf("enter the choice:\n");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("enter the elements to perform union:");
       scanf("%d %d",&x,&y);
       Union(x,y);
      break;
case 2:printf("enter the elements to check  if connected component:");
       scanf("%d %d",&x,&y);
       if(find(x)==find(y))
       printf("connected components\n");
       else
       printf("not connected components\n");
       break;
case 3:display();
      break;
}
  }while(ch!=4);
  return 0 ;
}
