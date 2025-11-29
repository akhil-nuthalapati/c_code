#include<stdio.h>
int main()
{
  int i,n;
  printf("enter number of memory allocations : ");
  scanf("%d",&n);
  int a[n];
  printf("enter elements into the array....\n");
  printf("---------------\n");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
   printf("---------------\n");
   printf("elements in reverse order...\n");
    printf("---------------\n");
    for(i=n-1;i>=0;i--)
    printf("%d\t",a[i]);
    printf("\n");
  return 0;
  }
