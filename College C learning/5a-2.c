#include<stdio.h>
int main(){
    int n;
    printf("Enter The size of array: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter the elements: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int max = 0;
    int idx;
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max = arr[i];
            idx = i;
        }
    }
    printf("Max element is: %d and the index is %d", max, idx);
}