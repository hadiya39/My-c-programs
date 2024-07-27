//store details of student in structure and display the same. ask details from user
#include <stdio.h>
struct student
 {
    int rollno;
    char name[50];
    float marks;
    char grade;
};

int main() {
    struct student S;
    printf("Enter roll number: ");
    scanf("%d", &S.rollno);

    printf("Enter name: ");
    scanf("%s", S.name);

    printf("Enter marks: ");
    scanf("%f", &S.marks);

    printf("Enter grade: ");
    scanf(" %c", &S.grade);

    // Display the details
    printf("\nStudent Details:\n");
    printf("Roll number: %d\n", S.rollno);
    printf("Name: %s\n", S.name);
    printf("Marks: %.2f\n", S.marks);
    printf("Grade: %c\n", S.grade);

    return 0;
}