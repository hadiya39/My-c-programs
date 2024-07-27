//to input values into an integer array of size 4 and then display the same
#include<stdio.h>
int main()
{
    int a[4],i;
    printf("enter the values of array");
    for(i=0;i<=3;i++)
    scanf("%d",&a[i]);
    printf("the contents of array are: ");
    for(i=0;i<=3;i++)
    printf("%d",a[i]);
    return 0;
}