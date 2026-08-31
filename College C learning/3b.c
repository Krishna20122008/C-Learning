#include<stdio.h>
int main(){
    int type;
    float hour, rate, salary;

    printf("1. clerk \n");
    printf("2. teacher \n");
    printf("3. principal \n"); 

    printf("Enter employee type \n");
    scanf("%d", &type);

    switch(type){
        case 1: rate = 100; break;
        case 2: rate = 200; break;
        case 3: rate = 300; break;
        default: printf("Invalid option entered \n");
    }

    printf("Enter the number of hours: \n");
    scanf("%f", &hour);
    if(hour >50){
        hour = 50;
    }
    if(hour <=44){
        salary = hour*rate;
    }
    else salary = 44*rate + (hour-44)*2*rate;
    
    printf("The final salary is %f \n", salary);
}
