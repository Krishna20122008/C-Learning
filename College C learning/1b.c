#include<stdio.h>
int main(){
    char division;
    int rollno;
    float marks;

    printf("Enter the division: ");
    scanf("%c", &division);
    
    printf("Enter the rollno: ");
    scanf("%d", &rollno);

    printf("Enter the marks: ");
    scanf("%f", &marks);

    printf("The division of student is: %c\n", division);
    printf("The roll no of student is: %d\n", rollno);
    printf("The marks of student is: %f\n", marks);
    printf("The address of division of student is: %d\n", &division);
    printf("The address of rollno of student is: %d\n", &rollno);
    printf("The address of marks of student is: %d\n", &marks);
    printf("The size of division of student is: %d\n", sizeof(division));
    printf("The size of rollno of student is: %d\n", sizeof(rollno));
    printf("The size of marks of student is: %d\n", sizeof(marks));

}