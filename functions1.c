#include<stdio.h>
int reverse(int);
int main()
{
int n,new;
printf("enter any natural number : ");
scanf("%d",&n);
new=reverse(n);
if(n==new)
printf("palindrome number");
else
printf("not a palindrome number");
    return 0;
}
int reverse(int x)
{
int rev;
for(rev=0;x!=0;x/=10)
rev=rev*10+x%10;
return rev;
}