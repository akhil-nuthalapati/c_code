#include<stdio.h>
int main()
{
char name[100] , street[100] , place[100]; int pin;
printf("enter name :");
scanf(" %s",name);
printf("enter street :");
scanf(" %s",street);
printf("enter place :");
scanf(" %s",place);
printf("enter pincode :");
scanf(" %d",&pin);
printf("---------------\n");
printf("address of %s is \n%s\n%s\n%d",name,street,place,pin);
    return 0;
}