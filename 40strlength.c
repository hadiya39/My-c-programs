//to input the srting from the user, ask his hame and find length of that string
#include<stdio.h>
int main()
{
    char a[100];
    int i=0;
    printf("enter your name: ");
    scanf("%s",&a);
    while(a[i]!='\0')
    {
         i++;
    }
    printf("length of string is %d ",i);
    return 0;
}