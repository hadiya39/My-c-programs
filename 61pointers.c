//demonstrate the use of pointers in programmig
#include<stdio.h>
int main()
{
    int x;
    int *p;   //declare an integer pointer
    x=10;
    p=&x;   // store the adress of x in pointer p
    printf("the value %d is stored at location %d in the memory\n",x,p);
    printf("%d",*p);

}