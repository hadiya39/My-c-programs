// find the sum of the following series 1 2 3 4 5 ....n
#include <stdio.h>

int main() {
    int n, sum = 0;

    // Ask user for the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate the sum of the series
    for(int i = 1; i <= n; i++) {
        sum =sum+i;
    }

    // Print the result
    printf("The sum of the series is: %d\n", sum);

    return 0;
}