//program to display all even numbers from 1 to n
#include<stdio.h>
int main()
{
int i,n;
printf("enter the value of n: ");
scanf("%d",&n);
for(i=2;i<=n;i+=2)
printf("%d  ",i);
return 0;



}