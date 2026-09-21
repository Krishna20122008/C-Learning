// 1. Write a c program to print all unique elements in an array.

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

    for(int i=0; i<n; i++){
        int count = 0;
        for(int j = 0; j<n; j++){
            if(arr[i]==arr[j]) count++;
        }
        if(count==1) printf("Unique element is %d\n", arr[i]);
    }

}