//Write a program in C to display the multiplication table for a given integer.
#include<stdio.h>
int main()
{
    int x,i;
    printf("enter the number whose multipilication is require:\n");
    scanf("%d",&x);
    for(i=1;i<=10;i++)
    {
        printf("%d x %d = %d\n",x,i,x*i);
    }
    return 0;
}