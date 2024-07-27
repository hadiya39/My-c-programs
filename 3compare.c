// read two numbers from keyboard and compare them
#include <stdio.h>

int main() {
    int i,j;

    // Read two numbers from the keyboard
    printf("Enter the first number: ");
    scanf("%d", &i);

    printf("Enter the second number: ");
    scanf("%d", &j);

    // Compare the two numbers
    if (i> j) 
    {
        printf("%d is greater than %d.\n", i,j);
    } 
    else if (i<j)
     {
        printf("%d is less than %d.\n", i,j);
     } 
    else 
    {
        printf("the two numbers are equal.\n", i,j);
    }

    return 0;
}


