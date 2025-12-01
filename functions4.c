#include<stdio.h>
int trace(int[3][3]);
int main()
{int i,j,a[3][3];
printf("enter the elements of the square matrix.....\n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    scanf("%d",&a[i][j]);
}
printf("The trace of the matrix is %d",trace(a));
    return 0;
}
int trace(int x[3][3])
{
     int i,j,sum;
     for(sum=i=0;i<3;i++)
     {
        for(j=0;j<3;j++)
        if(i==j)
        sum += x[i][j];
     }
     return sum;
}