#include<stdio.h>
int main()
{
  int i,r,n;
  printf("enter the table number : ");
  scanf("%d",&n);
  printf("enter the range of the table : ");
  scanf("%d",&r);
  printf("<-------->\n");
  for(i=1;i<=r;i++)
  printf("%d x %d = %d\n",n,i,n*i);
  printf("\n");
    return 0;
}