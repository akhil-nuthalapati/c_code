#include<stdio.h>
int getsum(int);
int main()
{

int n;
printf("enter the number of elements you want to add : ");
scanf("%d",&n);
int tot = getsum(n);
printf("sum of all elements = %d",tot);
    return 0;
}
int getsum(int x)
{
    int sum =0;
     int a[x],i;
     printf("enter the elements of array.....");
     for(i=0;i<x;i++)
     {scanf("%d",&a[i]);
     sum += a[i];
     }
     return sum;
}