#include<stdio.h>
int main()
{
   int i,j,n,isprime;
   printf("enter range : ");
   scanf("%d",&n);
   for(i=2;i<=n;i++)
    {  isprime = 1;
    
    for(j=2;j<=i/2;j++)
    {
       if(i%j==0)
       {
         isprime=0;
         break;
         }
     }
     if(isprime)
     printf("%d\t",i);
     }
     printf("\n");    	
  return 0;
  }
