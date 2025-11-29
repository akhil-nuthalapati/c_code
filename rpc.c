#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{   srand(time(NULL));
    int cmp,user;
    char ch;
   do{ printf("welcome to the game\n");
    printf("<------------------------->\n");
    printf("1)rock\n2)paper\n3)scissors\n");
    printf("enter your choice : ");
    scanf("%d",&user);
    cmp = (rand() % 3) + 1;
    printf("computers choice : %d\n",cmp);
    if(cmp == user)
    printf("its a tie\n");
    else if((cmp == 1 && user == 2) ||
            (cmp == 2 && user ==3)  ||
            (cmp == 3 && user == 1))
    printf("user wins\n");
    else
    printf("computer wins\n");
    printf("do you want to play again(y/n) :");
    scanf(" %c",&ch);
   }
   while(ch != 'n' && ch != 'N');
    return 0;
}
