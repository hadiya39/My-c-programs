//use strcmp()
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    printf("enter the first string\n");
    scanf("%s",&str1);
    printf("enter the second string\n");
    scanf("%s",&str2);
    int result= strcmp(str1,str2); //compares 
    if(result==0)
    {
        printf("strings are equal");
    }
    else if(result<0)
    {
        printf("string %s is less than string %s\n",str1,str2);
    }
    else 
    {
      printf("string %s is greater than string %s\n",str1,str2);

    }
    return 0;
}