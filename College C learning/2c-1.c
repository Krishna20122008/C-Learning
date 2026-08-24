#include<stdio.h>
int main(){
    // Swapping:

    int n1 = 10;
    int n2 = 20;
    int temp = n1;

    printf("The two numbers before swapping are: %d and %d\n", n1, n2);

    n1 = n2;
    n2 = temp;

    printf("The two numbers after swapping are: %d and %d\n", n1, n2);
}