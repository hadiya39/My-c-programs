//store details of students in an array of structure and display the same in tabular form
#include <stdio.h>
struct student
{
    int rollno;
    float marksobt;
    float totalmarks;

};
int main()
{
    int n,i;
    struct student s[100];
    printf("enter the number of students in your class:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter roll number of student %d:\n",i+1);
        scanf("%d",&s[i].rollno);
        printf("enter the marks obtained by student %d:\n",i+1);
        scanf("%f",&s[i].marksobt);
        printf("enter the total marks:\n");
        scanf("%f",&s[i].totalmarks);

    }
    //now to display in tabular format
    printf("ROLL NUMBER \t MARKS OBTAINED \t TOTAL MARKS\n");
    for(i=0;i<n;i++)
    {
        printf("    %d \t             %.1f \t               %.0f \n", s[i].rollno,s[i].marksobt,s[i].totalmarks);

    }
    return 0;
}
