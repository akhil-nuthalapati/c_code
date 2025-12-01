#include<stdio.h>
int main()
{
  int i,n,search,replace;
  printf("enter number of memory allocations :");
  scanf("%d",&n);
  int a[n];
  printf("enter the elements :");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("find what:");
  scanf("%d",&search);
  printf("replace with what :");
  scanf("%d",&replace);
  for(i=0;i<n;i++)
  {
    if(a[i]==search)
    a[i]=replace;
  }
for(i=0;i<n;i++)
printf("%d\t",a[i]);
    return 0;
}