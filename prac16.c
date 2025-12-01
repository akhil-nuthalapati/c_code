#include<stdio.h>
void rectangle(int *,int *,int *,int *);
int main()
{
int len,bre,area,peri;
printf("enter length :");
scanf("%d",&len);
printf("enter breadth :");
scanf("%d",&bre);
rectangle(&len,&bre,&area,&peri);
printf("area of the rectangle : %d\n",area);
printf("perimeter of the rectangle : %d\n",peri);

    return 0;
}
void rectangle(int *x, int *y, int *a,int *p)
{  
  *p = 2*((*x)+(*y));
  *a = (*x)*(*y);
}