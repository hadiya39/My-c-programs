//to reverse a string using pointers
#include<stdio.h>
int main()
{

    char *p= "tag";
    char *q;
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