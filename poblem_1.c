#include<stdio.h>
int main()
{
    int n, i, j, k = 0, flag, sum;

    printf("number of memory alloc: ");
    scanf("%d",&n);
    int a[n];
    int p[2];
    printf("enter elements into the array....\n");
    for(i = 0; i < n; i++)
        scanf("%d",&a[i]);
    for(i = 0; i < n; i++)
    {
        if(a[i] <= 1) 
            continue;

        flag = 1;

        for(j = 2; j <= a[i]/2; j++)
        {
            if(a[i] % j == 0)
            {
                flag = 0;
                break;
            }
        }

        if(flag == 1)
        {
            p[k] = i;
            k++;
            if(k == 2) 
                break;
        }
    }
    sum = 0;
    for(i = p[0] + 1; i < p[1]; i++)
        sum += a[i];

    printf("sum of elements in between the prime numbers = %d", sum);

    return 0;
}
