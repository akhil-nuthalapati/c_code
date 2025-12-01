#include<stdio.h>
int main()
    {
int phy,che,mat;
float avg;
printf("enter marks in phy :");
scanf("%d",&phy);
printf("enter marks in chemistry :");
scanf("%d",&che);
printf("enter marks in maths :");
scanf("%d",&mat);
avg = (mat+phy+che)/3.0;
printf("average = %.2f",avg);
    return 0;
    }
