#include<stdio.h>
int main()
{
  int i,j,k,n,m,p,q,a[100][100],b[100][100],c[100][100],sum;
  char ch;
  do
  {
  printf("enter dimensions for matrix 1 : ");
  scanf("%d %d",&n,&m);
  printf("enter dimensions for matrix 2 : ");
  scanf("%d %d",&p,&q);
  if(m==p)
  {
    printf("----------------\n");
    printf("enter elements into matrix 1...\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        scanf("%d",&a[i][j]);
    }
    printf("----------------\n");
    printf("enter elements into matrix 2...\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        scanf("%d",&b[i][j]);
    }
    printf("----------------\n");
    printf("product of two matrix...\n");
    printf("----------------\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<q;j++)
        {
            for(k=0,sum=0;k<m;k++)
            sum += a[i][k]*b[k][j];
            c[i][j]=sum;
        }
    }
    printf("----------------\n");
        for(i=0;i<n;i++)
        { 
            for(j=0;j<m;j++)
            printf("%d\t",c[i][j]);
            printf("\n");
        }
        printf("----------------\n");
        
        printf("do you want to use again? [y|n] : ");
        scanf(" %c",&ch);
        printf("----------------\n");
  }  
  } while(ch != 'n' && ch != 'N');
    return 0;
}