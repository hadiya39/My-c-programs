//to reverse a string using pointers. string to be input from user

#include<stdio.h>
int main()
{
    char str[100];
    char *p;
    char *q;
    printf("enter the string to be reversed:");
    scanf("%s",&str);
    p= str;
       q = p;
   while(*p!='\0')
   {
    p++;
   }
    p--;
    while(p>=q)
   {
      printf("%c",*p);
      p--;
   }    
    return 0;

}