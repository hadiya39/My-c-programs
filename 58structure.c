//store details of student and display the same
#include <stdio.h>
#include<string.h> // it allows to use strcpy function
struct student {
    int rollno;
    char name[50];
    float marks;
    char grade;
};

int main()
 {
    struct student S;
    S.rollno = 39;
    // in c ,we cant direct assign a string to a character array after declaration(name[50]). instead we use strcpy function
    strcpy(S.name, "hadiya");    // Use double for string literals
    S.marks = 22;
    S.grade = 'B';   // use single quote

    printf("Roll number = %d\nName = %s\nMarks = %.2f\nGrade = %c\n", S.rollno, S.name, S.marks, S.grade);
    return 0;
}
