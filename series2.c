//program to display series 10 9 8 7 6 4 3 2 1
#include<stdio.h>
int main()
{
    int i;
    for(i=10;i>=1;i--)
    {
        if(i!=5)
        printf("%d ",i);
    }
    return 0;
}