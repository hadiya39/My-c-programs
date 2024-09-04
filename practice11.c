//to find third angle of triangle if two are given
#include<stdio.h>
int main()
{
    float x,y,z;
    printf("enter the two angles of triangle:\n");
    scanf("%f%f",&x,&y);
    z=180-x-y;
    printf("the third angle of triangle is %.2f\n",z);
    return 0;
    
}