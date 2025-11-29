#include<stdio.h>
int main()
{
  int a=0,b=1,c=0;
  int i,n;
  printf("enter the range : ");
  scanf("%d",&n);
  for(i=0;i<=n;i++)
  { printf("%d\t",c);
    a = b;
    b = c;
    c = a + b;
  }
  printf("\n");
return 0;
}

