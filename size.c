//program for finding size of data type
#include<stdio.h>
int main()
{
    int integertype;
    float floattype;
    char chartype;
    double doubletype;
printf("size of int is %ld\n",sizeof(integertype));
printf("size of char is %ld\n",sizeof(chartype));
printf("size of float is %ld\n",sizeof(floattype));
printf("size of double is %ld\n",sizeof(doubletype));
return 0;
}