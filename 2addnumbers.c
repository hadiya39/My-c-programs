//program for adding two numbers 
#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,ans;

    printf("please enter the two numbers to be added");
    scanf("%d%d",&x,&y);
    ans=x+y;
    print("the sum of %d and %d is %d",x,y,ans);
    return 0;
}