#include<stdio.h>
int main()
{
 // using continue
 int i,n;
 printf("enter limit :");
 scanf("%d",&n);
 int skip;
 printf("enter number to skip :");
 scanf("%d",&skip);
 for(i=1;i<=n;i++)
 {
    if(i == skip)
    continue;
    else
    printf("%d\t",i);
 }
printf("\n");
    return 0;
}