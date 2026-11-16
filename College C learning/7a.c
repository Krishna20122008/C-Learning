#include <stdio.h>

int notes(int n) {
    int denominations[] = {100, 50, 20, 10, 5, 2, 1};
    int count = 0;

    for(int i = 0; i < 7; i++) {
        count += n / denominations[i];
        n = n % denominations[i];
    }

    return count;
}

int main() {
    int n;

    printf("Enter the amount: ");
    scanf("%d", &n);

    printf("Minimum number of notes = %d", notes(n));

    return 0;
}