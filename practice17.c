/*
Write a program in C to make a pyramid pattern with numbers increased by 1.
The pattern is as follows:

    1 
   2 2 
  3 3 3 
 4 4 4 4
                              */

#include <stdio.h>

int main() {
    int i, j, n = 4; // Number of rows in the pyramid
    int num = 1;    // Number to be printed

    for (i = 1; i <= n; i++) 
    {
        // Print leading spaces
        for (j = i; j < n; j++) 
        {
            printf(" ");
        }

        // Print numbers
        for (j = 1; j <= i; j++) 
        {
            printf("%d ", num);
        }

        // Move to the next line
        printf("\n");
        num++;
    }

    return 0;
}