#include<stdio.h>
int digits_sum(int x)
{
int i;
if(x==0)
return 0;
i = x%10 + digits_sum(x/10);
return i;
}
int main()
{
int n,sum;
printf("enter any natural number : ");
scanf("%d",&n);
sum = digits_sum(n);
printf("sum of all the digits = %d",sum);
    return 0;
}