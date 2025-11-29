#include<stdio.h>
int main()
{
  int x,y;
  printf("enter x :");
  scanf("%d",&x);
  printf("enter y :");
  scanf("%d",&y);
 
 if(x!=y)
 {
    printf("x is not equal to y\n");
    if(x>y)
  {
    printf("x is greater than y\n");
  }
 }
    return 0;
}