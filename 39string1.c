//to input a string of any length .string should be input from the user and displaY the same
#include<stdio.h>
int main()
{
    char arr[100];
    int i=0;
    printf("enter the string :\n");
    scanf("%s",&arr);
    printf("the string is: \n ");
    while(arr[i]!='\0')
    {
        printf("%c",arr[i]);
        i++;
    
    }
    return 0;

}