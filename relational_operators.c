#include<stdio.h>
int main()
{
 //using relational operators
 int a,b;
 printf("enter a :");
 scanf("%d",&a);
 printf("enter b :");
 scanf("%d",&b);
printf("value of a : %d\n",a);
printf("value of b : %d\n",b);
// using == operator
if(a==b)
printf("a is equal to b\n");
else
printf("a is not equal to b\n");
// using != operator
if(a!=b)
printf("a is not equal to b\n");
else
printf("a is equal to b\n");
// using greater than(>)
if(a>b)
printf("a is greater than b\n");
else
printf("a is not greater than b\n");
// using lessthan(<)
if(a<b)
printf("a is less than b\n");
else
printf("a is not lessthan b\n");
// using greater than or equal to
if(a>=b)
printf("a is greater than or equal to b\n");
else
printf("a is not greater than or equal to b\n");
// using lessthan or equal to
if(a<=b)
printf("a is less than or equal to b\n");
else
printf("a is not less than or equal to b\n");
    return 0;
}