#include<stdio.h>
int main()
{
  int a[50][50],b[50][50],c[50][50],i,j,k,sum,n,m,p,q;
  char ch;
  do{
  printf("Enter the dimentions of matrix 1 : ");
  scanf("%d %d",&n,&m);
  printf("Enter the dimentions of matrix 2 : ");
  scanf("%d %d",&p,&q);
  printf("-----------------------------------\n");
  if(m==p)
  {
      printf("Enter the elements into matrix 1 ....\n");
      for(i=0;i<n;i++)
      {
      for(j=0;j<m;j++)
      {scanf("%d",&a[i][j]);}
      }
       printf("-----------------------------------\n");
      
      printf("Enter the elements into matrix 2 ....\n");
      for(i=0;i<p;i++)
      {
      for(j=0;j<q;j++)
      {scanf("%d",&b[i][j]);}
      }
       printf("-----------------------------------\n");
      
      printf("Product of two matrices....\n");
      for(i=0;i<n;i++)
      {
      for(j=0;j<q;j++)
      {
        for(k=sum=0;k<m;k++)
          sum += a[i][k]*b[k][j];
          c[i][j] = sum;
      }
      }
      for(i=0;i<n;i++)
      {
      for(j=0;j<m;j++)
      printf("%d\t",c[i][j]);
      printf("\n");
      }
      printf("-----------------------------------\n");
      printf("Do you want to use again(y|n) : ");
      scanf(" %c",&ch);
      printf("-----------------------------------\n");
    }
  else
  { 
  
   printf("Incorrect dimensions to multiply....");
  
    }
  }while(ch != 'n'&&ch != 'N');

 return 0;
}
