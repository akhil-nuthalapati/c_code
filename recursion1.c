#include<stdio.h>
int sum(int);
int main ()
{
int m,n;
printf("enter the limit : ");
scanf("%d",&n);
m=sum(n);
printf("sum = %d",m);
    return 0;
}
int sum(int x)
{
int i;
if(x==1)
return 1;
i = x + sum(x-1);
return i;
}