//program to display series 2 4 16 256 65536...upto n terms
#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,x=2;
    printf("enter the value of n: ");
    scanf("%d",&n);
    printf("2  ");
    for(i=1;i<=n;i++)
    {
        x=pow(x,2);
        printf("%d  ",x);
    }
    return 0;
}