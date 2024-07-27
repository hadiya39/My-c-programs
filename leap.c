//program to check whether year is leap or not
#include<stdio.h>
intmain()
{
int x;
printf("enter the year");
scanf("%d",&x);
if(x%4==0 && x % 100!=0 || x%400==0)
printf("%d is a leap year",x);
else 
printf("%d is not a leap year", x);
return 0;







}