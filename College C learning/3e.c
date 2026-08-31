#include<stdio.h>
int main(){
    float classTest, Tutorial, se, lpw, see;

    printf("Enter the class test marks: ");
    scanf("%f", &classTest);

    printf("Enter the Tutorial marks: ");
    scanf("%f", &Tutorial);

    printf("Enter the SE marks: ");
    scanf("%f", &se);

    printf("Enter the LPW marks: ");
    scanf("%f", &lpw);

    printf("Enter the SEE marks: ");
    scanf("%f", &see);

    int finalMarks = (classTest*0.12)+(Tutorial*0.12)+(se*0.16)+(lpw*0.2)+(see*0.4);

    if(finalMarks<40) printf("Fail");
    else if(finalMarks>40 && finalMarks<51) printf("C");
    else if(finalMarks>=51 && finalMarks<61) printf("C+");
    else if(finalMarks>=61 && finalMarks<71) printf("B");
    else if(finalMarks>=71 && finalMarks<81) printf("B+");
    else if(finalMarks>=81 && finalMarks<91) printf("A");
    else if(finalMarks>=91 && finalMarks<=100) printf("A+");
    else printf("Wrong input, Enter the marks out of 100");
}