//Write a program in C to read 10 numbers from the keyboard and find their sum and average.
#include <stdio.h>

int main() {
    int i,n,num,sum=0;
    float average;

    // Input the number of natural numbers
    printf("Enter the number of natural numbers: ");
    scanf("%d", &n);

    // Input each number and calculate the sum
    for (int i = 1; i <= n; i++) {
       
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        sum =sum+ num;
    }

    // Calculate the average
    average = (float)sum / n;  // we cast variable to float type

    // Output the result
    printf("The average of the entered numbers is: %.2f\n", average);

    return 0;
}
//this program works for both if numbers are simultaneous or not. if we are sure that the numbers are first n natural numbers then we use formula n*(n-1)/2 for sum