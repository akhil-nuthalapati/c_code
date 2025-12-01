#include<stdio.h>
#include<string.h>
void perm(char *,int,int);
void swap(char *,char *);
int main()
{
char str[10];
int n;
printf("enter the string : ");
scanf("%s",str);
n = strlen(str);
printf("all possible permutations : \n");
perm(str,0,n-1);
    return 0;
}  
void perm(char *s, int a, int n)
{
    int j;
    if(a==n)
    printf("%s\n",s);
    else
    {
        for(j=a;j<=n;j++)
        {
            swap((s+a),(s+j));
            perm(s,a+1,n);
            swap((s+a),(s+j));
        }
    }
}
void swap(char *c1,char *c2)
{
    char temp;
    temp = *c1;
    *c1 = *c2;
    *c2 = temp;
}