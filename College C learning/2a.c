#include<stdio.h>
int main(){
    int n1,n2;
    printf("Enter the two numbers one by one: ");
    scanf("%d %d", &n1, &n2);
    float div = (float)n1/n2;

    printf("The addition of %d and %d is: %d\n", n1,n2,n1+n2);
    printf("The substraction of %d and %d is: %d\n", n1,n2,n1-n2);
    printf("The multiplication of %d and %d is: %d\n", n1,n2,n1*n2);
    printf("The division of %d and %d is: %f\n", n1,n2,div);
    printf("The modulus of %d and %d is: %d\n", n1,n2,n1%n2);
}