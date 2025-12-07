#include<stdio.h>
int main()
{
  int i,j;
  char ch;
  for(i=5;i>=1;i--)
  {
    for(j=i,ch = 'A';j>=1;j--)
     {
        printf("%c ",ch);
        ch++;
     }
     printf("\n");
  }

    return 0;
}