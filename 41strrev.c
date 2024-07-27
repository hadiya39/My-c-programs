// to input string from user and display it in reverse order
#include<stdio.h>
int main()
{
char a[100];
int i;
printf("Enter a string: ");
scanf("%s",&a);
for(i=0;a[i]!=0;i++); //for loop without body
 i--;
 while(i>=0)
 {
    printf("%c",a[i]);
    i--;
 }
return 0;

}