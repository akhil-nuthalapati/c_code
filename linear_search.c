#include<stdio.h>
int main()
{
 int i,n,flag=0,search;
 printf("enter number of memory allocations : ");
 scanf("%d",&n);
 int a[n];
 printf("enter elements into array....\n");
 printf("---------------\n");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 printf("enter element to search : ");
 scanf("%d",&search);
 for(i=0;i<n;i++)
 {
   if(a[i]==search)
   {
     flag = 1;
     break;
     }
}
if(flag)
printf("existing...\n");
else
printf("dosent exist....\n");
return 0;
}
