#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int random, guess;
    srand(time(0));
    random = rand()%10+1;

    printf("Enter a guess: \n");
    scanf("%d", &guess);

    if(random == guess) printf("You have guessed correct answer. \n");
    else{
        printf("You could not guess the correct answer. \n");
        printf("The correct answer is %d \n", random);
    }
}