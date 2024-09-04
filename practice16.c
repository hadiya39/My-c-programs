//Write a C program to display the n terms of odd natural numbers and their sum.
#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("enter the number of terms:\n");
    scanf("%d",&n);
    printf("the first %d odd numbers are: ",n);
    for(i=1;i<=n;i++)
    {
      printf("%d ", 2*i-1);
      sum=sum + 2*i-1;
    }
    printf("\n sum of these odd numbers is: %d ",sum);
    return 0;
}