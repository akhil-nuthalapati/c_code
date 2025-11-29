#include<stdio.h>
int main()
{  int age;
printf("enter age:");
scanf("%d",&age);
if(age<18)
{
    printf("you are minor\n");
}
else{
    if(age>= 18 && age <= 60)
    printf("you are adult\n");
    else
    printf("you are senior\n");
}

    return 0;
}
