#include<stdio.h>
int main()
{
float area,circum,rad;
float *r = &rad,*a = &area,*c = &circum;
printf("enter radius : ");
scanf("%f",r);
*a = 2*3.14*(*r);
*c = 3.14*(*r)*(*r);
printf("area of circle = %.2f\n",*a);
printf("circumference = %.2f",*c);
    return 0;
}