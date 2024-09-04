//program that prints perimeter of rectangle using its height and width
#include<stdio.h>
int main()
{
    float l,b,p;
    printf("enter length of rectangle:\n");
    scanf("%f",&l);
    printf("enter breadth of rectangle:\n");
    scanf("%f",&b);
    p=2*(l+b);
    printf("perimeter of rectangle = %.3f\n",p);
    return 0;

}