//swap teo integers using funcyions(call by reference method) using pointers
#include<stdio.h>
void swap(int*,int*);
int main()
{
    int x,y;
    printf("enter two integers:\n");
    scanf("%d%d",&x,&y);
    printf("the values before swapping are: %d and %d \n",x,y);
    swap(&x,&y);
    printf("the values after swapping are: %d and %d \n",x,y);
    return 0;
}
void swap(int *p1, int *p2)
{
    int temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
}