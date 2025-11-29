#include<stdio.h>
int main()
{
  int min,max,i,n;
  printf("enter number of memory allocations : ");
  scanf("%d",&n);
  int a[n];
  printf("-----------------\n");
  printf("enter elementnts into array......\n");
  printf("-----------------\n");
  for(i=0;i<n;i++)
  {
  scanf("%d",&a[i]);
  }
  max = a[0];
  for(i=0;i<n;i++)
  {
   if(max < a[i])
   max = a[i];
  }
  min = a[0];
  for(i=0;i<n;i++)
  {
   if(min > a[i])
   min = a[i];
  }
  printf("maximum value = %d\nminimum value = %d\n",max,min);
return 0;
}
