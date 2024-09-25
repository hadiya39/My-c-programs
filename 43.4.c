// use strcpy()
#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    printf("enter a string:\n");
    scanf("%s",&a);
    strcpy(b,a);
    printf("the first string is: %s\n",a);
    printf("the second string is:%s\n",b);
    return 0;
}