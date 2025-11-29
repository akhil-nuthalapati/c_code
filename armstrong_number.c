#include <stdio.h>
#include <math.h>

int main() {
    long long n, m, temp;
    printf("Enter any natural number : ");
    scanf("%lld", &n);

    m = n;
    temp = n; 

    int count = 0;

    while (temp != 0) {
        temp /= 10;
        count++;
    }

    long long sum = 0;
    temp = n;

 for(sum =0;n!=0;n/=10)
 sum += pow(n%10,count);
 
    if (sum == m)
        printf("%lld is an Armstrong number.\n", m);
    else
        printf("%lld is NOT an Armstrong number.\n", m);

    return 0;
}

