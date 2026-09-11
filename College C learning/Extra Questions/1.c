#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int sum = 0;

    for(int i=2; i<=n; i+=2){
        sum+=i;
    }
    printf("Sum is %d", sum);
}