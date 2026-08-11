#include<stdio.h>
int main(){
    int a, b, temp;

    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);

    printf("The numbers entered are: %d and %d \n", a, b);

    temp = a;       // Swapping
    a=b; 
    b=temp;

    printf("The numbers are now swapped: %d and %d \n", a, b);
}