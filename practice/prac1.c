#include<stdio.h>
int main()
{
  int n,fi,se,th;
  printf("enter a three digit number : ");
  scanf("%d",&n);
  fi = n%10;
  n/=10;
  se = n%10;
  n /= 10;
  th = n%10;
  printf("%d%d%d",fi,se,th);
    return 0;
}