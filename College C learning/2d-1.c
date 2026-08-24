#include<stdio.h>
int main(){
    int a, b;
    printf("Enter the numbers: ");
    scanf("%d %d", &a, &b);

    int max = (a>b)?a:b;
    printf("%d is maximum", max);
}