//to check whether a string is palindrome or not using pointers
#include<stdio.h>
int main()
{
    char str[50];
    printf("enter the string to be checked:\n");
    scanf("%s", &str);
    char *p,*q;
    p=str;
    q=p;
    while(*p!='\0')
    {
        p++;
    }
    p--;
    while(p>q)
    {
        if(*p != *q)
        {
            printf("the string is not a palindrome\n");
            return 0;

        }
        p--;
        q++;

    }
    printf("the string is a palindrome");
}
