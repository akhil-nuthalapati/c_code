#include<stdio.h>
void copy(char *,char *);
int main()
{
  char a[50],b[50];
   scanf("%s",a);
   copy(a,b);
   printf("%s",b);
    return 0;
}
void copy(char *p,char *q)
{
    int i;
    for(i=0;p[i]!='\0';i++)
    q[i]=p[i];
    q[i]='\0';
}