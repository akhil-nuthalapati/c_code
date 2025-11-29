#include<stdio.h>
int main()
{
   int rep,i,n,pos;
   printf("enter number of memory allocations : ");
   scanf("%d",&n);
   int a[n];
   printf("------------------\n");
   printf("enter elements into array....\n");
   printf("------------------\n");
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   printf("------------------\n");
   printf("enter position to replace : ");
   scanf("%d",&pos);
   printf("enter element to replace : ");
   scanf("%d",&rep);
   pos--;
   a[pos]=rep;
   printf("------------------\n");
   printf("After replacing...\n");
   printf("------------------\n");
   for(i=0;i<n;i++)
   {
   printf("%d\t",a[i]);
   }
printf("\n"):

  return 0;
}
