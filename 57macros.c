//demonstrate use of macros
//for instance let us take area of circle
#include<stdio.h>
#define area(x) pi*x*x
#define pi 3.14
int main()
{
    float r;
    printf("enter the radius of circle:\n");
    scanf("%f",&r);
    printf("area of circle =%f",area(r));
    return 0;
}
 
