//find the sum of 1 + 1/2 + 1/4 + 1/6 +....
#include<stdio.h>
int main()
{
float i,n,sum=1;
for(i=2;i<=n;i=i+2)
{
    sum=sum+1/i;
}
printf("the sum of series is %f",sum);
return 0;
}