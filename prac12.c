#include<stdio.h>
int main()
{
  int len,bre,area,peri;
  int *l=&len,*b=&bre,*a=&area,*p=&peri;
  printf("enter length :");
  scanf("%d",l);
  printf("enter breadth :");
  scanf("%d",b);
  *a=(*l)*(*b);
  *p=2*((*l)+(*b));
  printf("area = %d\n",*a);
  printf("perimeter = %d",*b);

    return 0;
}