#include<stdio.h>
int main(){
    int marks;
    printf("Enter the marks of student: ");
    scanf("%d", &marks);

    if(marks<33) printf("Fail");
    else printf("Pass");
}