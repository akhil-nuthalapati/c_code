#include<stdio.h>
int main()
{
int n,m,c,d,i,j,k,a[50][50],b[50][50],e[50][50],sum;
printf("enter the order of first matrix : ");
scanf("%d %d",&n,&m);
printf("enter the elements of first matrix :\n");
for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
    scanf("%d",&a[i][j]);
}
printf("enter the order of second matrix :");
scanf("%d %d",&c,&d);
printf("enter the elements of second matrix :\n");
for(i=0;i<c;i++)
{

    for(j=0;j<d;j++)
    scanf("%d",&b[i][j]);
}
if(m==c)
{
printf("product for two matrices.....\n");
for(i=0;i<n;i++)
{
    for(j=0;j<d;j++)
    {
        for(sum=0,k=0;k<m;k++)
        sum += a[i][k]*b[k][j];
        e[i][j]=sum;
    }
}
for(i=0;i<n;i++)
{
    for(j=0;j<d;j++)
    printf("%d\t",e[i][j]);
    printf("\n\n");
}
}
else
printf("invalid matrix cant multiply...");
    return 0;
}
