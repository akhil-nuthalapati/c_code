#include<stdio.h>
int main()
{
  //dicount = 5;
int qty;
float price,bill,disc,nbill;
printf("enter price : ");
scanf("%f",&price);
printf("enter quantity :");
scanf(" %d",&qty);
bill = price*qty;
disc = (bill*5)/100;
nbill = bill - disc;
printf("discount = %.2f\n",disc);
printf("bill = %.2f\n",bill);
printf("net bill = %.2f",nbill);
    return 0;
}