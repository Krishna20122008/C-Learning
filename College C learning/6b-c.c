#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char name[100];
    printf("Enter the name: ");
    scanf("%99s", name);

    for(int i=0; i<strlen(name); i++){
        int count = 0;
        int first = 1;
        for(int j = 0; j<i; j++){
            if(tolower(name[i])==tolower(name[j])){
                first = 0;
                break;
            }
        }
        if(!first) continue;

        for(int j = 0; j < strlen(name); j++){
            if(tolower(name[i]) == tolower(name[j])) count++;
        }
        if(count>1) printf("The letter %c is repeating %d times.\n", name[i], count);
    }
}
