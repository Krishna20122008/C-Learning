#include<stdio.h>
int main(){
    int x;
    printf("Enter the value of x: \n");
    scanf("%d", &x);

    if(x%10==0) printf("0 turns");
    else if((x*2)%10==0) printf("1 turn");
    else printf("-1 turn");
}