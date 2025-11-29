#include<stdio.h>
#include<math.h>
int main()
{ 
     int n;
printf("enter number :");
scanf("%d",&n);
printf("square of %d = %.2f\n",n,(float)pow(n,2));
    return 0;
}
// gcc <filename.c> -o a.out -lm