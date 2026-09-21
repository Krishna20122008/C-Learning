#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int rev = 0;

    while(n!=0){
        int lastDigit = n%10;
        rev = rev*10 +lastDigit;
        n/=10;
    }
    printf("The reverse is: %d", rev);
}