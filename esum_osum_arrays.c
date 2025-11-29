#include<stdio.h>
int main()
{
  int esum=0,osum=0,i,n;
  printf("enter number of memory allocations : ");
  scanf("%d",&n);
  int a[n];
  printf("-------------\n");
  printf("enter elements into the array.........\n");
  printf("-------------\n");
  for(i=0;i<n;i++)
  {
  scanf("%d",&a[i]);
  if(a[i]%2==0)
  esum += a[i];
  else
  osum += a[i];
  }
  printf("even sum = %d\nodd sum = %d\n",esum,osum); 
 return 0;
 }
