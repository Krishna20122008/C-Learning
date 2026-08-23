#include<stdio.h>
int main(){
    float amount;
    float finalAmount;
    printf("Enter the total shopping amount: ");
    scanf("%f", &amount);

    if(amount<=5000){
        finalAmount = amount;
        printf("You get no discount on your shopping, payable amount: %.1f", finalAmount);
    }
    else if(amount>=5001 && amount<=7000){
        finalAmount = amount-(amount*5/100);
        printf("You get 5%% discount on your shopping, payable amount: %.1f", finalAmount);
    }
    if(amount>=7001 && amount<=9000){
        finalAmount = amount-(amount*10/100);
        printf("You get 10%% discount on your shopping, payable amount: %.1f", finalAmount);
    }
    if(amount>=9001){
        finalAmount = amount-(amount*20/100);
        printf("You get 20%% discount on your shopping, payable amount: %.1f", finalAmount);
    }
}