#include<stdio.h>
int main()
{
int time,amt;
float rate,si,tot;
printf("enter amount :");
scanf("%d",&amt);
printf("enter time in months : ");
scanf("%d",&time);
printf("enter rate of intrest : ");
scanf("%f",&rate);
si = (amt*time*rate)/100.0;
tot = amt + si;
printf("intrest = %.2f\n",si);
printf("total amount = %.2f",tot);
    return 0;
}