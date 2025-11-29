#include<stdio.h>
int main()
{
  int n,rev,temp;
  printf("enter a number : ");
  scanf("%d",&n);
  temp = n;
  for(rev=0;n!=0;n/=10)
  {rev = rev*10 + n%10;}
  if(temp == rev)
  { printf("palindrome number...");}
  else
  {printf("not a palindrome number");}
  printf("\n");
  return 0;
}
