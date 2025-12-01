#include<stdio.h>
void rev(char *);
int main()
{
  char a[50];
  scanf("%s",a);
  rev(a);
  printf("%s",a);
  return 0;
}
void rev(char *p)
{
  int i,j,temp;
  for(i=0;p[i]!=0;i++);
  i--;
  for(j=0;j<i;j++,i--)
  {
   temp =p[j];
   p[j]=p[i];
   p[i]=temp;
  }

}