#include<stdio.h>
int main()
{
    int a,b;
    printf("enter base : ");
    scanf("%d",&a);
    printf("enter height : ");
    scanf("%d",&b);
    printf("area of the rectangle : %.2f",(float)0.5*a*b);
    printf("\n");
    return 0;
}