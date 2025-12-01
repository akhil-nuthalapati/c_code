#include<stdio.h>
int isselected(int,int,int);
int main(){
int age,gen,per,i,sum;
int a[10];
printf("enter age :");
scanf("%d",&age);
for(sum=0,i=1;i<4;i++)
{
    printf("enter marks in subject %d :",i);
    scanf("%d",&a[i]);
    sum += a[i];
}
per= (sum*100)/300;
if(isselected(gen,age,per))
printf("eligible");
else
printf("not eligible");
    return 0;
}
int isselected(int x,int y,int z){
    int flag;
if(y>=35 && y<=50 && z > 75)
flag = 1;
else
flag=0;
return flag;
}