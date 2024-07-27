//display the digits of natural number in the reverse order
#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,r;
    printf("enter a natural number: ");
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        printf("%d",r);
        n=n/10;
    }
    return 0;
}