#include<stdio.h>
#include<string.h>
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
    temp =0;
    j = strlen(p)-1;
    for(i=0, j = strlen(p)-1;i<j;i++,j--)
    { temp=p[i];
     p[i]=p[j];
     p[j]=temp; 
}
}