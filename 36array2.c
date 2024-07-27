//program where user enters integer array and displays the same. we dont know size of of array.size of array is variable.
#include<stdio.h>
int main()
{
int a[100],n,i; //max possible value of array
printf("enter the no. of elements of array:\n");
scanf("%d",&n);
printf("enter the elements of array:\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("the elements of array are:\n ");
for(i=0;i<n;i++)
printf("%d",a[i]); 
return 0;

}