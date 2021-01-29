#include <stdio.h>
void main()
{
  int a[10],b[10],c[20],n1=0,n2=0,n3=0,i,j,temp=0;
  
  printf("enter the number of elemets for first array:\n");
  scanf("%d",&n1);
  printf("enter the elemets for first array:\n");
  for(i=0;i<n1;i++)
  {
    scanf("%d",&a[i]);
  }
  
  printf("enter the number of elemets for second array:\n");
  scanf("%d",&n2);
  printf("enter the elemets for second array:\n");
  for(i=0;i<n2;i++)
  { 
    scanf("%d",&b[i]);
  }
  
  n3=n1+n2;
  
  for(i=0;i<n1;i++)
  {
     c[i]=a[i];
  }
  
  j=n1;
  
  for(i=0;i<n2;i++)
  {
     c[j]=b[i];
     j++;
  }
  
  printf("the array after appending are: ");
  for(i=0;i<n3;i++)
  {
    for(j=i+1;j<n3;j++)
    {
      if(c[i]>c[j])
      {
        temp=c[i];
        c[i]=c[j];
        c[j]=temp;
      }
    }
  
  }
  for(i=0;i<n3;i++)
  {
      printf("%d \t",c[i]);
  }
  
}