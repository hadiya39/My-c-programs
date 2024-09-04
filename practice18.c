/*
 Write a C program to display the pattern as a pyramid using asterisks, with each row containing an odd number of asterisks.

   *
  ***
 *****                 */

#include<stdio.h>
int main()
{
    int i, j, n; 

    
    printf("Input number of rows for this pattern :");    //input the number of rows
    scanf("%d", &n);
    for (i =1 ; i < n+1; i++) // Loop for the number of rows.
    {
        for (j = 1; j <= n - i; j++) // Loop to print spaces before the stars.
            printf(" ");

        for (j = 1; j <= 2 * i - 1; j++) // Loop to print the stars.
            printf("*");

        printf("\n"); // Move to the next line after printing each row.
    }
    return 0;
}





