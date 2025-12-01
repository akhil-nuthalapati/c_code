#include<stdio.h>
int main()
{
  int i,j,k,sum,n,m,p,a[50][50],b[50][50],c[50][50],q;
  char ch;
  do{
    printf("enter the dimensions of the matrix..1\n");
    scanf("%d %d",&n,&m);
    printf("enter the dimensions of the matrix..2\n");
    scanf("%d %d",&p,&q);
    if(m==p)
    {   printf("<------------------------>\n");
      printf("enter the elements of matrix one.....\n");
      for(i=0;i<n;i++)
      {
        for(j=0;j<m;j++)
        scanf("%d",&a[i][j]);
      }
        printf("<------------------------>\n");
        printf("enter the elements of matrix two.....\n");
      for(i=0;i<p;i++)
      {
        for(j=0;j<q;j++)
        scanf("%d",&b[i][j]);
      }
        printf("<------------------------>\n");
        printf("product of two matrices....\n");
        for(i=0;i<n;i++)
        {
            for(j=0;j<q;j++)
            {
                for(sum=k=0;k<m;k++)
                sum += a[i][k]*b[k][j];
                c[i][j]=sum;
            }
        }
        
      }
    
    else
    printf("invalid dimensions to multiply...");

     printf("<------------------------>\n");
     for(i=0;i<n;i++)
     {
        for(j=0;j<m;j++)
        printf("%d\t",c[i][j]);
        printf("\n");
     }
      printf("<------------------------>\n");
      printf("do you want to use again(y/n) :");
      scanf(" %c",&ch);
      printf("<------------------------>\n");
  } 
  while(ch != 'n' && ch != 'N');
    return 0;
}