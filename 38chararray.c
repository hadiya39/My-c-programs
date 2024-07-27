//display the contents of a character array hadiya
#include<stdio.h>
int main()
{
    char arr[7]={'h','a','d','i','y','a'};
//or char[7]="hadiya";
int i=0;
while(arr[i]!='\0')
{
    printf("%c",arr[i]);
    i++;
}
return 0;




}