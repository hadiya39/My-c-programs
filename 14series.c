// display the series using loops n n-1 n-2 .....3 2 1
#include <stdio.h>

int main() {
    int n;

    // Input the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Display the series using a for loop
    for (int i = n; i >= 1; i--) {
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}