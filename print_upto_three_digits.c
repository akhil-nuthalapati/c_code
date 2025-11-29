#include <stdio.h>

int main() {
    int n, fi, se, th;
    printf("enter any three digit number : ");
    scanf("%d", &n);

    if (n < 100 || n > 999) {
        printf("Please enter a valid three digit number....\n");
        return 1;
    }

    th = n%10;
    n=n/10;
    se = n%10;
    n=n/10;
    fi = n%10;

    switch (fi) {
        case 1:
        printf("one hundred "); 
        break;
        case 2: 
        printf("two hundred "); 
        break;
        case 3: 
        printf("three hundred "); 
        break;
        case 4: 
        printf("four hundred "); 
        break;
        case 5: 
        printf("five hundred "); 
        break;
        case 6: 
        printf("six hundred "); 
        break;
        case 7: 
        printf("seven hundred "); 
        break;
        case 8: 
        printf("eight hundred "); 
        break;
        case 9: 
        printf("nine hundred "); 
        break;
    }

    if (se != 0 || th != 0) {
        printf("and ");
    }

    if (se == 1) {
        switch (th) {
            case 0: 
            printf("ten"); 
            break;
            case 1: 
            printf("eleven"); 
            break;
            case 2: printf("twelve"); 
            break;
            case 3: 
            printf("thirteen"); 
            break;
            case 4: 
            printf("fourteen"); 
            break;
            case 5: 
            printf("fifteen"); 
            break;
            case 6: 
            printf("sixteen");
            break;
            case 7: 
            printf("seventeen"); 
            break;
            case 8: 
            printf("eighteen"); 
            break;
            case 9: 
            printf("nineteen"); 
            break;
        }
    } else {
        switch (se) {
            case 9: 
            printf("ninety "); 
            break;
            case 8: 
            printf("eighty "); 
            break;
            case 7: 
            printf("seventy "); 
            break;
            case 6: 
            printf("sixty "); 
            break;
            case 5: 
            printf("fifty "); 
            break;
            case 4: 
            printf("forty "); 
            break;
            case 3: 
            printf("thirty "); 
            break;
            case 2: 
            printf("twenty "); 
            break;
        }
        if (se != 1 && th != 0) {
            switch (th) {
                case 1: 
                printf("one");
                break;
                case 2: 
                printf("two"); 
                break;
                case 3: 
                printf("three"); 
                break;
                case 4: 
                printf("four"); 
                ;
                case 5: 
                printf("five"); 
                break;
                case 6: 
                printf("six"); 
                break;
                case 7: 
                printf("seven"); 
                break;
                case 8: 
                printf("eight"); 
                break;
                case 9: 
                printf("nine"); 
                break;
            }
        }
    }
    printf("\n");
    return 0;
}
