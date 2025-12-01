#include<stdio.h>
void swap (int *, int *);
int main()
{
   int a,b;
   printf("enter integer a:");
   scanf("%d",&a);
   printf("enter integer b:");
   scanf("%d",&b);
   swap(&a,&b);
   printf("a : %d\n",a);
   printf("b : %d",b);
    return 0;
}
void swap(int *x,int *y)
{
   *x = *x + *y;
   *y = *x - *y;
   *x = *x - *y;

}