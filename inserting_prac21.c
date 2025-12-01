#include<stdio.h>
int main()
{  
   int i,n,pos,add;
   printf("enter total number of memory allocations :");
   scanf("%d",&n);
   int a[n];
   printf("enter the elements.....\n");
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   printf("enter position to insert....\n");
   scanf("%d",&pos);
   if(pos>=1 && pos<=n+1)
   {
      pos--;
      for(i=n-1;i>=pos;i--)
      a[i+1]=a[i];
      printf("enter element to insert:");
      scanf("%d",&a[pos]);
            n++;
   }   
printf("resultant array....\n");
for(i=0;i<n;i++)
{
    printf("%d\t",a[i]);
}
    return 0;
}