#include<stdio.h>
int main()
{
  int len,bre;
  printf("enter length :");
  scanf("%d",&len);
  printf("enter breadth :");
  scanf("%d",&bre);\
  int peri = 2*(len+bre);
  int area = len*bre;
  printf("perimeter of rectangle = %d\n",peri);
printf("area of rectangle = %d\n",area);

    return 0;
}