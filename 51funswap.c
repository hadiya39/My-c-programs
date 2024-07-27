//swap two numbers using functions
#include<stdio.h>
void swap(int,int);
int main()
{
    int x,y;
    printf("enter the numbers to be swapped: \n");
    scanf("%d%d",&x,&y);
    printf("the numbers before swapping are: %d ,%d ",x,y);
    swap(x,y);  //call the function
    
    return 0;
}

void swap(int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("the numbers after swapping are: %d ,%d ",x,y);

}