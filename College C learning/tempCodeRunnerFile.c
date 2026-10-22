#include<stdio.h>
int main(){
    int marks[5][4];
    for(int i=0; i<5; i++){
        printf("Enter the marks of student %d ", i+1);
        for(int j = 0; j<4; j++){
            scanf("%d", &marks[i][j]);
            if(marks[i][j] > 100){
                printf("Enter valid marks!");
                continue;
            }
        }
    }
    for(int i=0; i<5; i++){
        int sum = 0;
        for(int j=0; j<4; j++){
            sum+=marks[i][j];
        }
        printf("Sum of marks of student %d is %d \n", i+1, sum);
    }
}