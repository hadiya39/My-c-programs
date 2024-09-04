// Write a C program that displays the n terms of square natural numbers and their sum.1 4 9 16 ... n Terms
#include<stdio.h>

int main()
{
    int i,n,sum=0;
    printf("enter the number of terms to be printed: \n");
    scanf("%d",&n);
    printf("the squares of numbers upto %d are; \n",n);
    for(i=1;i<=n;i++)
    {
        printf("%d  ",i*i);
        sum=sum+i*i;
    }
    printf("\n sum of these numbers = %d ",sum);
    return 0;
}
