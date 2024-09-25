// demonstrate the use of strcat()
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[7] = "Hadiya";
    char str2[6]= "Iqbal";
    strcat(str1,str2); //concatinates strings
    printf("concatinated string : %s\n",str1);
    return 0;
}