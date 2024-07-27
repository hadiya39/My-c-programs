//display fibonacci series using recurssion
int fab(int,int,int,int);
#include <stdio.h>
int main()
{
    int n,a,b,c,i;
    printf("enter the no. of terms: ");
    scanf("%d",&n);
    fab(a,b,c,i);
    return 0;
}

int fab(int a,int b,int c,int i)
{
     a=0;
    b=1;
    printf("%d  ",a);
    printf("%d  ",b);
    for(i=1;i<=n-2;i++)
    {
        c=a+b;
        printf("%d  ",c);
        a=b;
        b=c;
    
    }
    return 0;
}
