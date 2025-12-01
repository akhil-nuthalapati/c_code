#include<stdio.h>
void max(int,int);
int main()
{
  int n,m;
  scanf("%d %d",&n,&m);
   max(n,m);
    return 0;
}
void max(int a,int b)
{
  int i,j,a_max=0,o_max=0,x_max=0;
  for(i=1;i<=a;i++)
  {
    for(j = i + 1;j<=a;j++)
    {
        int and = i & j;
        if(and < b && and > a_max)
        a_max = and;
    }
    for(j = i + 1;j<=a;j++)
    {
        int or = i | j;
        if(or < b && or > o_max)
        o_max = or;
    }
    for(j = i + 1;j<=a;j++)
    {
        int xor = i ^ j;
        if(xor < b && xor > x_max)
        x_max = xor;
    }

  }
printf("%d\n%d\n%d",a_max,o_max,x_max);

}