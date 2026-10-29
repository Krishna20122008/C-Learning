#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];
    int i, j, count, found = 0;
    printf("Enter the name: ");
    scanf("%s", name);

    for (i = 0; i < strlen(name); i++) {
        count = 0;

        for (j = 0; j < strlen(name); j++) {
            if (tolower(name[i]) == tolower(name[j]))
                count++;
        }

        for (j = 0; j < i; j++) {
            if (tolower(name[i]) == tolower(name[j]))
                break;
        }

        if (j == i && count > 1) {
            printf("%c is repeating %d times\n", tolower(name[i]), count);
            found = 1;
        }
    }

    if (found == 0)
        printf("None of the characters are repeating.");

    return 0;
}