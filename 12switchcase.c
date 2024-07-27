//use switch case to display salaam when user enters 1,adaab when user enters 2 and hello when user enters 3
#include<stdio.h>
int main()
{
    int x;
    printf("Enter 1 for salaam, 2 for adaab and 3 for hello: ");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
        printf("Salaam");
        break;
        case 2:
        printf("Adaab");
        break;
        case 3:
        printf("hello");
        break;
        default:
        printf("invalid option");
        
    }
    return 0;
}