//display the fibonacci series: 0 1 1 2 3 5 8 13 21...
#include <stdio.h>
int main()
{
    int a,b,c,i,n;
    printf("enter the no. of terms: ");
    scanf("%d",&n);
    a=0;
    b=1;
    printf("%d  ",a);
    printf("%d  ",b);
    for(i=1;i<=n-2;i++)
    {
        c=a+b;
        printf("%d  ",c);
        a=b;
        b=c;
    
    }
    return 0;
}