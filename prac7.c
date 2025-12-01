#include<Stdio.h>
int main()
{
int le,bre,hei;
printf("enter length :");
scanf("%D",&le);
printf("enter breadth : ");
scanf("%D",&bre);
printf("enter heigth : ");
scanf("%d",&hei);
int vol = le*bre*hei;
printf("volume of box = %d",vol);

    return 0;
}