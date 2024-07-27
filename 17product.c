//find the product of the following series 1 2 3 4 5 ....n
#include <stdio.h>

int main() {
    int n;
    unsigned long long product = 1;  // Use unsigned long long to handle large products

    // Ask user for the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate the product of the series
    for(int i = 1; i <= n; i++) {
        product=product*i;
    }

    // Print the result
    printf("The product of the series is: %llu\n", product);

    return 0;
}