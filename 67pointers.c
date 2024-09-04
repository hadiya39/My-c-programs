//to display the cntents of integer array in reverse order using pointers
#include<stdio.h>
int main()
{
    int a[100],n,i;
    int *p;
    printf("enter the size of integer array:\n");
    scanf("%d",&n);
    printf("enter the elements of integer array:\n");
    p=&a[0];
    for(i=0;i<n;i++)
    {
        scanf("%d ",p);
        p++;

    }
     p--;
    
    for(i=0;i<n;i++)
    {
        printf("%d",*p);
        p--;
    }
    return 0;
}