/*Display the following pattern (using loops):
1
12
123
1234       */
#include <stdio.h>

int main() {
    int i, j;
    // Outer loop for rows
    for (i = 1; i <= 4; i++) {
        // Inner loop for columns
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        // Newline after each row
        printf("\n");
    }

    return 0;
}