//calculate volume of sphere
 #include<stdio.h>
 #define pi 3.1415926
int main()

{
    float r,v;
    printf("enter the radius of sphere:\n");
    scanf("%f",&r);
    v=(4.0/3.0)*pi*r*r*r;    // using 4.0/3.0 instead of 4/3 to ensure floatiiong point division.
    printf("volume of sphere of radius %.2f = %.3f\n",r,v);
    return 0;


}