#include<stdio.h>
int main(){
    int n;
    printf("Enter the no. of rows: ");
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        int ascii = 65+i;
        for(int j = 65; j<=ascii; j++){
            printf("%c", j);
        }
        printf("\n");
    }
}