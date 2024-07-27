//program to check if the given number is positive or negative

#include<stdio.h>
int main()
{
    double x;
    printf("enter a number");
    scanf("%lf",&x);
    if(x<0)
    printf("the number is negative\n");
    else
    printf("the number is positve");
    return 0;

}