#include<stdio.h>
int main()
{
 //increment and decrement
 int a,b;
 float c,d;
 printf("enter a:");
 scanf("%d",&a);
 printf("enter b:");
 scanf("%d",&b);
 printf("enter c:");
 scanf("%f",&c);
 printf("enter d:");
 scanf("%f",&d);
 printf("++a = %d\n",++a);
 printf("--b = %d\n",--b);
 printf("++c = %.2f\n",++c);
 printf("--d = %.2f\n",--d);
 return 0;
}