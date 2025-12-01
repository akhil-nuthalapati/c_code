#include<Stdio.h>
void space(int lim)
{
    for(int i =0;i<lim;i++)
    printf("  ");
}
void stars(int lim)
{
    for(int i=0;i<lim;i++)
    printf("* ");
}
int main()
{  int i,j,n;
  printf("enter n : ");
  scanf("%d",&n);
  for(i=n;i>=1;i--)
  {
    space(i-1);
    stars(2*n-(2*i-1));
    space(i-1);
    printf("\n");
  }
  for(i=1;i<n;i++)
  {
    space(i);
    stars(2*n-(2*i+1));
    space(i);
    printf("\n");
  }
    return 0;
}