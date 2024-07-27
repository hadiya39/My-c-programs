//program to display series 12345 12345 12345....n times
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("enter the value of n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=5;j++)
        {
            printf("%d",j);
        }
        printf("  ");
    }
    return 0;
}