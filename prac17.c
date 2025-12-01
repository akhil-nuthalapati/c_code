#include<stdio.h>
void billing(int ,int ,int *,int *);
int main()
{
 int cmr,pmr,nu,bill;
 printf("enter current month reading :");
 scanf("%d",&cmr);
 printf("enter previous month reading :");
 scanf("%d",&pmr);
 billing(cmr,pmr,&nu,&bill);
 printf("number of units : %d\n",nu);
 printf("total bill : %d",bill);
    return 0;
}
void billing(int x,int y,int *n,int *b)
{
*n = x-y;
*b = 15.45 * (*n);

}