//Check whether a number is prime or not
#include <stdio.h>

int main() {
    int i, n, flag = 1; 

    printf("Enter the number to be checked: ");
    scanf("%d", &n);

    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            flag = 0;
            break; 
        }
    }

    if (flag == 1) {
        printf("The number is prime\n");
    } else {
        printf("The number is not prime\n");
    }

    return 0;
}
