#include<stdio.h>
int main()
{
int rad; float per,area;
printf("enter radius :");
scanf("%d",&rad);
per = 2*3.14*rad;
area = 3.14* rad*rad;
printf("area of the circle : %.2f\n",area);
printf("circumference of th circle : %.2f",per);
    return 0;
}