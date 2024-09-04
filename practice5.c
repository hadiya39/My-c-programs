//convert centigrade into fahrenheit
#include<stdio.h>
int main()
{
    float c,f;
    printf("entre the temperature in degree celcius:\n");
    scanf("%f",&c);
    f=(c*9/5)+32;
    printf("%.2f in fahrenheit = %.2f",c,f);
    return 0;

}