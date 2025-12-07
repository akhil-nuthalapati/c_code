#include<stdio.h>
int main()
{
  int i,j;
  char ch;
  for(i=0;i<=5;i++)
  {
    for(j=0,ch='A';j<=i;j++)
    {
        printf("%c ",ch);
        ch++;
    }
    printf("\n");
  }


    return 0;
}