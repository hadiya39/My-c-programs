//program that converts kilometers per hour into miles per hour
#include<stdio.h>
int main()
{
    float x;
    printf("enter length in km per hour:\n");
    scanf("%f",&x);
    x=x/1.609344;
    printf("lenth in miles per hour = %.4f\n",x);
    return 0;
}