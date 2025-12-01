#include<stdio.h>
int main()
{
int qty;
float price,bill;
int *q = &qty; float *p= &price,*b = &bill;
printf("enter price :");
scanf("%f",p);
printf("enter quantity :");
scanf("%d",q);
*b = (*p) * (*q);
printf("total bill = %.2f",*b);

    return 0;
}