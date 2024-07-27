// program to display the series 1 22 333 4444 55555...n times
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("enter the value of n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",i);
        }
        printf("  ");

    }  
    return 0;
     

}