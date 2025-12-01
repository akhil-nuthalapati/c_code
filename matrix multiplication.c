#include<stdio.h>
int main()
{  int i,j,k,n,m,p,q,sum,a[50][50],b[50][50],c[50][50];
    printf("enter the dimentions of matrix 1 :");
    scanf("%d %d",&n,&m);
     printf("enter the dimentions of matrix 2 :");
    scanf("%d %d",&p,&q);

if(m==p)
{
printf("enter the elements of matrix 1 :\n");
for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
    scanf("%d",&a[i][j]);
}

printf("enter the elements of matrix 2 :\n");
for(i=0;i<p;i++)
{
    for(j=0;j<q;j++)
    scanf("%d",&b[i][j]);
}
for(i=0;i<n;i++)
{
    for(j=0;j<q;j++)
    {
        for(k=sum=0;k<m;k++)
        sum += a[i][k]*b[k][j];
        c[i][j]=sum;
    }
}
printf("the product of two matrixes is :\n");
for(i=0;i<n;i++)
{
    for(j=0;j<p;j++)
    printf("%d\t",c[i][j]);
    printf("\n");
}

}
else
printf("invalid dimentions to multiply");
    return 0;
}