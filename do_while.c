#include<stdio.h>
int main()
{
  int i=1,n;
  printf("enter limit :");
  scanf("%d",&n);
  do
  {
    printf("%d\t",i);
    i++;
  } while(i<=n);
printf("\n");

    return 0;
}