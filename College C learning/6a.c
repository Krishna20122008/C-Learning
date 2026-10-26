#include<stdio.h>
#include<string.h>
int main(){
    int n;
    printf("Enter the size of string to be entered: ");
    scanf("%d", &n);
    char str[n+1];

    printf("Enter the string: ");
    scanf("%s", str);

    char character;
    printf("Enter the character to be removed: ");
    scanf(" %c", &character);

    for(int i=0; i<n; i++){
        if(character==str[i]) {
            int idx = i;
            for(int j = idx; j<n; j++){
                str[j] = str[j+1];
            }
            i--;
        }
    }

    printf("%s", str);
}