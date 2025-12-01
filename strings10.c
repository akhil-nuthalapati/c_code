#include<stdio.h>
void concat(char *,char *);
int main()
{
  char a[50],b[50];
  scanf("%s",a);
  scanf("%s",b);
  concat(a,b);
  printf("%s",a);
    return 0;
}
void concat(char *p,char *q)
{  int i,j;
    for(i=0;p[i]!='\0';i++);
    for(j=0;q[j]!=0;i++,j++)
    {
        p[i]=q[j];
    }
    p[i]='\0';
}