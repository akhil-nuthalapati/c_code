#include<stdio.h>
int main()
{
  int time,amt,rate;
  float si,tot;
  printf("enter principal amount : ");
  scanf("%d",&amt);
  printf("enter time (in months) : ");
  scanf("%d",&time);
  printf("enter the rate of intrest : ");
  scanf("%d",&rate);
  si = (amt*time*rate)/100.0;
  tot = amt + si;
  printf("simple intrest : %.2f\n",si);
  printf("total amount needed to pay : %.2f",tot);
  printf("\n");
    return 0;
}