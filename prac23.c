#include<stdio.h>
void copy(int *,int *,int);
int main()
{   
    int a[50],b[50],n,i;
    printf("enter the number of memory allocations :");
    scanf("%d",&n);
    printf("enter the elements....\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    copy(a,b,n);
    printf("resultant array....\n");
    for(i=0;i<n;i++)
     printf("%d\t",b[i]);
    return 0;
}
void copy(int *p,int *q, int k)
{
    int i;
    for(i=0;i<k;i++)
    q[i]=p[i];
}