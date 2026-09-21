#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int sum = 0;

    while(n!=0){
        sum+=(n%10);
        n/=10;
    }

    printf("The sum of digits is: %d", sum);
}