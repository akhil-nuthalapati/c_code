#include<stdio.h>
int main()
{
  int i,j,st = 1;
  for(i=0;i<=6;i++)
  {
    if(i%2==0)
    st = 0;
    else
    st = 1;
    for(j=0;j<i;j++)
    {printf("%d ",st);
        st =1-st;
  }
  printf("\n");
}


    return 0;
}