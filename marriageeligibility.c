#include<stdio.h>
int main()
{
  int age; char gen;
  printf("enter age : ");
  scanf("%d",&age);
  printf("enter gender {m|f} : ");
  fflush(stdin);
  scanf(" %c",&gen);
  if(age<=18 && (gen == 'f' || gen == 'F'))
  printf("eligible for marriage\n");
  else if(age >= 22 && (gen == 'm' || gen == 'M'))
  printf("eligible for marriage\n");
  else
  printf("not eligible for marriage..");
  printf("\n");
    return 0;
}