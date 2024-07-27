//find the sum of squares of first n natural numbers
#include<stdio.h>
int main()
{
    int n,sum;
    printf("enter the value of n:\n");
    scanf("%d",&n);
    sum=(n*(n+1)*(2*n+1))/6;
    printf("the sum of squares of first %d natural numbers is %d:\n",n,sum);
    return 0;
}