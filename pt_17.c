#include<stdio.h>
int main()
{
  int i,j;
  char ch ='A';
  for(i=0;i<=4;i++)
  {
    for(j=0;j<=4-i;j++)
    printf("  ");

    for(j = 0; j <= i; j++)
            printf("%c ", ch + j);

    for(j = i - 1; j >= 0; j--)
            printf("%c ", ch + j);
    for(j=0;j<=4-i;j++)
    printf("  ");
    printf("\n");
  }
    return 0;
}