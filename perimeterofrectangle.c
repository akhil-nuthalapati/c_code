#include<stdio.h>
int main()
{
  int a,b;
  printf("enter length : ");
  scanf("%d",&a);
  printf("enter breadth : ");
  scanf("%d",&b);
printf("perimeter of rectangle : %.2f",(float)2*(a+b));
printf("\n");
    return 0;
}