#include<stdio.h>
int main()
{
   int i,temp,j,n;
   printf("enter number of memory alloctions : ");
   scanf("%d",&n);
   int a[n];
   printf("enter elements into the array ....\n");
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
printf("the elements before sorting...\n");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
printf("\nelements after sorting...\n");
for(i=0;i<n-1;i++){
    for(j=0;j<n-i-1;j++)
    {
        if(a[j]>a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
}
for(i=0;i<n;i++)
{
    printf("%d\t",a[i]);
}


    return 0;
}