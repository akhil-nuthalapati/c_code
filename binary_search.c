#include<stdio.h>
int binarysearch(int a[], int n, int tar) {
    int st = 0, end = n - 1, mid;

    while(st <= end) {
        mid = st + (end - st)/2;
        if(a[mid] == tar)
            return mid + 1;

        else if(a[mid] > tar)
            end = mid - 1;

        else
            st = mid + 1;
    }

    return 0;
}

int main() {
    int n, i, tar, pos;

    printf("enter number of mem alloc : ");
    scanf("%d", &n);

    int a[n];
    printf("enter elements in ascending order : \n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("enter target : ");
    scanf("%d", &tar);

    pos = binarysearch(a, n, tar);

    if(pos != 0)
        printf("Element found at position : %d\n", pos);
    else
        printf("Element not found\n");

    return 0;
}
