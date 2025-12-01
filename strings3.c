#include<stdio.h>
int main()
{
char a[1000];
fgets(a,sizeof(a),stdin);
int i;
for(i=0;a[i]!= '\0';i++)
{
    if(a[i]!=' ')
    printf("%c",a[i]);
    else
    printf("\n");
}

    return 0;
}