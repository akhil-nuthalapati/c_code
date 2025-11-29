#include<stdio.h>
int main()
{
  int i,fact,n;
  printf("enter a natural number : ");
  scanf("%d",&n);
  for(i=fact=1;i<=n;i++)
  fact *= i;
  printf("factorial of %d : %d",n,fact);
  printf("\n");
    return 0;
}