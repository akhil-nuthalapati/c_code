#include<stdio.h>
int main()
{
  int n,rev;
  printf("enter any natural number : ");
  scanf("%d",&n);
  for(rev=0;n!=0;n/=10)
    rev = rev*10+n%10;
  printf("number in reverse : %d\n",rev);
  return 0;
}
