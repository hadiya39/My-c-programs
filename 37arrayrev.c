// display the elements of an integer array in reverse order.array should be input from the user
#include<stdio.h>
int main()
{

int a[100],n,i; //max possible value of array
printf("enter the no. of elements of array:\n");
scanf("%d",&n);
printf("enter the elements of array");
for(i=0;i<=n-1;i++)
scanf("%d",&a[i]);
printf("the elements of array are: ");
for(i=n-1;i>=0;i--)
printf("%d",a[i]);
return 0;

}