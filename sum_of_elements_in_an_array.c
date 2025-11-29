#include<stdio.h>
int main()
{
  int i,n,sum=0;
  printf("enter number of memory allocations : ");
  scanf("%d",&n);
  int a[n];
  printf("enter elements into array...\n");
  printf("-------------\n");
  for(i=0;i<n;i++)
  {
  scanf("%d",&a[i]);
  sum += a[i];
  }
  printf("sum of all the elements in the array = %d \n",sum);
  return 0;
}
