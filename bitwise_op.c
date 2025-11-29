#include<stdio.h>
int main()
{
  // using bitwise operators
  int a,b;
  printf("enter a :");
  scanf("%d",&a);
  printf("enter b :");
  scanf("%d",&b);
  //using bitwise AND
  printf("%d & %d = %d\n\n",a,b,a&b);
   //using bitwise OR
   printf("%d | %d = %d\n\n",a,b,a|b);
    //using bitwise XOR
    printf("%d ^ %d = %d\n\n",a,b,a^b);
     //using bitwise NOT
     printf("~%d = %d\n\n~%d = %d\n",a,~a,b,~b);
    return 0;
}