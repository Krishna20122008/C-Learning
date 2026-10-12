#include<stdio.h>
int main(){
    int marks[5][4];
    for(int i=0; i<5; i++){
        printf("Enter the marks of student %d ", i+1);
        for(int j = 0; j<4; j++){
            scanf("%d", &marks[i][j]);
        }
    }
    int average = 0;
    for(int i=0; i<5; i++){
        average+=marks[i][0];
    }
    average/=5;
    printf("\n Average of marks of CP is %d \n", average);
}