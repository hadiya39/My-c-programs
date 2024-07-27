//using concept of break
#include <stdio.h>
int main()
{
    int i;
    for(i=1;i<=5;i++)
    {
        if(i==3)
        break;
        printf("%d",i);
    }
    return 0;
}