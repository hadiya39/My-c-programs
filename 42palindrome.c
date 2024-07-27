// to input a string from user and check whether it is a palindrome or not(madam,mam,dad,malayalam  etc)
#include<stdio.h>
int main()
{
char a[100];
int i,j,flag=1;
printf("Enter a string: ");
scanf("%s",&a);
for(i=0;a[i]!=0;i++); //for loop without body
 i--;
 j=0;
 while(j<i) // from left ot right is denoted by j , and from right to left is denoted by i
 {
    if(a[j]!=a[i])
    {
        printf("the string is not palindrome");
        flag=0;
        break;

    }
    j++;
    i--;
 }
 if(flag==1)
 {
    printf("the string is a palindrome");
 }
return 0;

}