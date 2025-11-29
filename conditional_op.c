#include<stdio.h>
int main()
{// using ternary operator
int a,b;
printf("enter a:");
scanf("%d",&a);
printf("enter b:");
scanf("%d",&b);
int max;
max = (a>b)? a:b;
printf("maximum value = %d\n",max);
    return 0;
}