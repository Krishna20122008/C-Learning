#include <stdio.h>
#include <stdlib.h>

int main()
{
	int number = rand() % 100 + 1;
	int guess;
	int i;

	for (i = 1; i <= 5; i++) {
		printf("Guess the number: ");
		scanf("%d", &guess);

		if (guess == number) {
			printf("Correct!\n");
			break;
		}

		if (guess < number) {
			printf("Greater\n");
		} else {
			printf("Smaller\n");
		}
	}

	if (guess != number) {
		printf("Sorry\n");
	}

	return 0;
}