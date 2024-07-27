// display the series 2 4 8 16 32....(n terms)
#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,p;
    printf("n= ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        p=pow(2,i);
        printf("%d  ",p);
    }
    return 0;
}