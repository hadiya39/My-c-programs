// display table of all integers from 2 to 20

#include<stdio.h>
int main()
{
int i,j;
for(i=2;i<=20;i++)
{
    for(j=1;j<=10;j++)
    {
        printf("%d x %d = %d\n",i,j,i*j);
    }
    printf("\n\n");
}
return 0;




}