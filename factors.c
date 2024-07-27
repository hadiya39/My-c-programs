//find all the factors of a number
#include<stdio.h>
int main()
{
    int n,i;
    printf("enter a number: ");
    scanf("%d",&n);
    printf("factors of %d are :",n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
         printf("%d  ",i);
    }
    
    return 0;
}