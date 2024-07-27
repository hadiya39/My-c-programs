//find the sum of squares of first n natural numbers
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("enter the value of n:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i*i;

    }
    printf("the sum of squares of first %d natural numbers is %d:\n",n,sum);
    return 0;
}