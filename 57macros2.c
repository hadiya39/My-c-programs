//comparing two numbers using macros
#include<stdio.h>
#define min(a,b) (a<b?a:b)
#define max(a,b) (a>b?a:b)
int main()
{
    int x,y;
    printf("enter the two numbers:\n");
    scanf("%d%d",&x,&y);
    printf("minimum of %d and %d is %d\n",x,y,min(x,y));
    printf("maximum of %d and %d is %d \n",x,y,max(x,y));
    return 0;
}
