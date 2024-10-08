#include <stdio.h>
#include <stdlib.h>

int main()
{
    // variable grade
    int grade;

    // enter the grade
    printf("Enter a grade of student: ");
    scanf("%d", &grade);

    // condition for check grade student
    if(grade < 10) {
        printf("the student fails");
    } else if (grade >= 10 && grade < 12) {
        printf("the student got a passable grade");
    } else if (grade >= 12 && grade < 14) {
        printf("the student got a fairly good grade");
    } else if (grade >= 14 && grade < 16) {
        printf("the student got a good grade");
    } else if (grade >= 16 ) {
        printf("the student got a very good grade");
    }
    return 0;
}
