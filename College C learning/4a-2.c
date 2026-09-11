#include<stdio.h>
int main(){
    int n;
    printf("Enter the no. of rows: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        int j;
        if((i) % 2 != 0){
            j = 1;
            for(; j <= i + 1; j++){
                if(j % 2 != 0) printf("1");
                else printf("0");
            }
        }
        else{
            j = 0;
            for(; j < i + 1; j++){
                if(j % 2 != 0) printf("0");
                else printf("1");
            }
        }
        printf("\n");
    }
}