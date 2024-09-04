//Write a program in C to display the cube of first n natural numbers

#include<stdio.h>
int main()
{
    int n,i;
    printf("enter the number of terms:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("cube of %d is %d\n",i,i*i*i);
        
    }
    return 0;
}