#include<stdio.h>
int main()
{
 // simple calculator using arthmetic operators
 int a,b;
 printf("enter a :");
 scanf("%d",&a);
 printf("enter b :");
 scanf("%d",&b);
 char ch;
 printf("enter the arthmetic operand (+/-/*///%%) :");
scanf(" %c",&ch);
if(ch == '+')
{
    //addition
    printf("%d + %d = %d\n",a,b,a+b);
}
if(ch == '-')
{
    //substaction
    printf("%d - %d = %d\n",a,b,a-b);
}
if(ch == '*')
{
    //multiplication
    printf("%d * %d = %d\n",a,b,a*b);
}
if(ch == '/')
{
    //division
    printf("%d / %d = %d\n",a,b,a/b);
}
if(ch == '%')
{
    //modulus
    printf("%d %% %d = %d\n",a,b,a%b);
}

    return 0;
}
