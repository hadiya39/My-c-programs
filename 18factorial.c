//program to find factorial of an integer
#include<stdio.h>
int main()
{
int i,n;
unsigned long long f=1;
printf("enter a number whose factorial is to be found: ");
scanf("%d",&n);
if(n<0)
printf("error! Factorial of negative number doesn't exist.");
else{

for(i=1;i<=n;i++)
{
    f=f*i;
}
    printf("the factorial of %d is %llu",n,f);

}
return 0;

}