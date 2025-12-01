#include<stdio.h>
int main()
{
   int a,b,c,n;
a=0,b=1,c=0;
printf("enter limit : ");
scanf("%d",&n);
int i;
for(i=0;c<n;i++)
{
    printf("%d\t",c);
    a=b;
    b=c;
    c=a+b;
}
    return 0;
}