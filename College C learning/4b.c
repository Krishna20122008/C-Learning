#include<stdio.h>
#include<math.h>
int main(){
    int num;
    printf("Enter a number to check for prime: ");
    scanf("%d", &num);
    int count = 0;

    for(int i = 2; i<sqrt(num); i++){
        if(num%i==0){
            count++;
            break;
        }
    }
    if(count!=0 || num==1) printf("Not a prime number!");
    else printf("It is a Prime number!");
}