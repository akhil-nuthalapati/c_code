#include<stdio.h>
int main()
{
  int i,j,n;
  printf("enter limit :");
  scanf("%d",&n);
  for(i=2;i<=n;i++)
{
  int flag = 0;
  for(j=2;j<i;j++)
  {
    if(i%j==0)
    {
      flag = 1;
      break;
    }
  }
  if(flag == 0)
  printf("%d\t",i);
}
  return 0;
}