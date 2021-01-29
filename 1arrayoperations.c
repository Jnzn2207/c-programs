#include<stdio.h>
#include<stdlib.h>

int arr[20], n, ch, i, pos, val;
void create();
void disply();
void insert();
void search();
void delet();
void main() {

  do {
    printf("\n\tenter your choice:\n\n");
    printf("1.create\n2.disply\n3.insert\n4.search\n5.delete\n6.exit\n\n\t");
    scanf("%d", & ch);
    switch (ch) {
    case 1:
      create();
      break;
    case 2:
      disply();
      break;
    case 3:
      insert();
      break;
    case 4:
      search();
      break;
    case 5:
      delet();
      break;
    case 6:
      break;
    default:
      printf("enter the right choice");
    }
  } while (ch != 6);
}
void create() {
  printf("enter the size of array:");
  scanf("%d", & n);
  printf("enter the array elements:\n");
  for (i = 0; i < n; i++) {
    scanf("%d", & arr[i]);
  }
}
void disply() {
  printf("\nThe elements in array are:\t");
  for (i = 0; i < n; i++)
    printf("%d\t", arr[i]);
}
void insert() {
  printf("enter the position where the element to be inserted:");
  scanf("%d", & pos);
  printf("enter the value:");
  scanf("%d", & val);
  for (i = n - 1; i >= pos - 1; i--) {
    arr[i + 1] = arr[i];
  }
  arr[pos - 1] = val;
  n = n + 1;
  disply();
}
void search() {
  int flag = 0;
  printf("enter the value to e searched:");
  scanf("%d", & val);
  for (i = 0; i < n; i++) {
    if (val == arr[i]) {
      flag = 1;
      break;
    }
  }
  if (flag) {
    printf("The element is present\n");
  } else {
    printf("element is not present");
  }
  disply();
}
void delet() {
  printf("enter the position of element to be deleted:");
  scanf("%d", & pos);
  if (pos >= n + 1) {
    printf("deletion not possibe");
  } else {
    for (i = pos - 1; i < n - 1; i++)
      arr[i] = arr[i + 1];
    printf("resultant array is:\n");
   
    for (i = 0; i < n - 1; i++)
      printf("%d\t\n", arr[i]);
     n--;
  }
}