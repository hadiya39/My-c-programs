//use strlen()
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("enter a string:\n");
    scanf("%s",&str);
    int length= strlen(str);
    printf("ther length of the entered string is:%d",length);
    return 0;
}