#include<stdio.h>
int main()
{
int a[50],b[50],c[50],i,n;
printf("enter number of memory allocations :");
scanf("%d",&n);
printf("enter elements in array 1..\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter elements in array 2..\n");
for(i=0;i<n;i++)
scanf("%d",&b[i]);
printf("sum of elements of two arrays ...\n");
for(i=0;i<n;i++)
{
    c[i] = a[i] + b[i];
    printf("%d\t",c[i]);
}
printf("\n");
return 0;
}