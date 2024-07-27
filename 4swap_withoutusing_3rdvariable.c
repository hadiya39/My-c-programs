//program for swapping two number without using any 3rd variable

#include<stdio.h>
#include<math.h>
int main()
{
    float a,b;
    printf("enter the numbers to be swapped");
    scanf("%f%f",&a,&b);
    printf("the numbers before swapping are %f and %f\n",a,b);
    a=a+b; //sum of the two numbers(say c) is stored in a ...5= 5+3=7
    b=a-b; //difference of c and original b( say d) is stored in b...3=7-3=5
    a= a-b; // difference of sum and new b is stored in a (c-d)....5=7-5=3
    printf("the numbers after swapping are %f and %f",a,b);
    return 0;
    
}