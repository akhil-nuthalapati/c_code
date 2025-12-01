 #include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
  int usr,cmp;
  char ch;
  do
  {
  (time(NULL));
  printf("welcome to the game.....\n");
  printf("1.Rock\n");
  printf("2.paper\n");
  printf("3.scissors\n");
  printf("enter your choice from above options : ");
  scanf("%d",&usr);
  cmp = rand() % 3;
  printf("computer choose : %d\n",cmp);
  if(usr == 1 && cmp == 3)
  printf("user wins..\n");
  if(usr == 2 && cmp == 1)
  printf("user wins..\n");
  if(usr == 3 && cmp == 2)
  printf("user wins..\n");
  if(usr == cmp)
  printf("its a tie\n");
  else
  printf("oh! you have lost, computer wins\n");
  printf("want to try again ? (y/n) : ");
    scanf(" %c",&ch);
    printf("<-------------------->\n");
}
while(ch != 'n' && ch != 'N');
    return 0;
}