#include<stdio.h>
int main(){
    int a;
    printf("Enter the number of rows: ");
    scanf("%d", &a);

    for(int i=1; i<=a; i++){
        for(int j = 0; j<a-i; j++){
            printf(" ");
        }
        for(int j=1; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }
}