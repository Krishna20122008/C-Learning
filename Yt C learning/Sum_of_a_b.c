#include<stdio.h>
int main(){
    int a, b;
    
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    int sum = a+b;
    printf("The sum of %d and %d is: %d", a, b, sum);
    
    // in python: print(f(The sum of {a} and {b} is: {sum}))
    // in cpp: cout << "The sum of " << a << "and " << b << "is " << sum << endl;
}