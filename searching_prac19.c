#include<stdio.h>
int main()
{
     int n,m,i,search;
     int flag =0;
     printf("enter the number of memory allocations :");
     scanf("%d",&n);
     int a[n];
     printf("enter the elements of the array :");
     for(i=0;i<n;i++)
     scanf("%d",&a[i]);
     printf("find what : ");
     scanf("%d",&search);
     for(i=0;i<n;i++)
     {
        if(a[i]==search)
      {
        flag =1;
        break;
      }
     }
       if(flag)
      printf("existing...");
      else
      printf("dosent exist...");

    return 0;
}