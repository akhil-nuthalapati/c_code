#include<stdio.h>
#include<math.h>
int power(int,int);
int main()
{
int base,p;
printf("enter base :");
scanf("%d",&base);
printf("enter power :");
scanf("%d",&p);
printf("%d power to %d = %d",base,p,power(base,p));
    return 0;
}
int power(int x, int y)
{ int res,i;
for(res=i=1;i<=y;i++)
res*=x;
return res;
}