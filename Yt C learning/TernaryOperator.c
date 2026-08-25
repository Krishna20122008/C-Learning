#include<stdio.h>
int main(){
    int marks = 33;
    printf( "Enter marks: ");
    scanf("%d", &marks);

    printf("%s\n", (marks>33)? "pass":"fail");
}