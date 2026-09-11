#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int original = n;
    int sum = 0;

    while(n!=0){
        int lastDigit = n%10;
        int temp = lastDigit*lastDigit*lastDigit;
        sum+=temp;
        n/=10;

    }
    if(sum==original) printf("%d is an armstrong number.", original);
    else printf("%d is not an armstrong number.", original);
}