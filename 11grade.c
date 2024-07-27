//program thTat inputs the total marks obtained by a student and the maximum marks and produces output in terms of grades of student
#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,z;
    printf("enter the total marks obtained by the student");
    scanf("%d",&x);
    printf("enter the maximum marks ");
    scanf("%d",&y);
    z=(x/y)*100;
    if(z>=90)
    printf("grade= O");
    if(z>=80 && z<90)
     printf("grade=A");
     if(z>=70 && z<80)
printf("grade=B");
if(z<70)
printf("grade=F, better luck for next time");
return 0;
}