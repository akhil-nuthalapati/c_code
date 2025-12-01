#include<stdio.h>
int factorial(int x)
{
int i;
if(x==1)
return 1;
i = x * factorial(x-1);
return i;


}
int main()
{
int n,res;
printf("enter the number : ");
scanf("%d",&n);
res = factorial(n);
printf("factorail of %d = %d",n,res);
    return 0;
}