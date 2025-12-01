#include<stdio.h>
#include<string.h>
int main()
{
  int i,len;
  char a[50];
  scanf("%s",a);
  for(i=0;a[i]!='\0';i++);
  len = i;
printf("%d",len);
    return 0;
}