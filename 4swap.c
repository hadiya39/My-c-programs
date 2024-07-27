//program for swapping two numbers without using third variable
#include<stdio.h>
int main()
{
    float a,b,c;
printf("enter the numbers to be swapped");
scanf("%f%f",&a,&b);
printf("the numbers before swapping are %f and %f\n",a,b);
c=a;
a=b;
b=c;
printf("the numbers after swapping are %f and %f",a,b);
return 0;
}