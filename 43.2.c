//use strrev()
#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    printf("enter a string\n");
    scanf("%s",&s);
    strrev(s);
    printf("reversed string is:%s",s);
    return 0;
}