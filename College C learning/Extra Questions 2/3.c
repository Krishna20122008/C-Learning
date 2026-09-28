#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int duplicate;
    int frequency;
    for(int i=0; i<n; i++){
        int count = 0;
        for(int j=0; j<n; j++){
                if(arr[i]==arr[j]) count++;
        }
        if(count>1){
            duplicate = arr[i];
            frequency = count;
        }
    }
    printf("Duplicate element is %d and its frequency is %d\n", duplicate, frequency);
}