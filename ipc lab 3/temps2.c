// ARRAYS
// This program takes a number of days and uses arrays to print the temperature of those days, displays average and highest and lowest days

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	void title();
	title();

	int days = 0;
	int high[10];
	int low[10];
	int highday;
	int lowday;
	int hightemp = 0;
	int lowtemp = 0;
	int num;
	float sum = 0;
	float avr = 0;
	printf("\nPlease enter the number of days, between 3 and 10, inclusive: ");
	scanf("%d", &days);


	while (days > 10 || days < 3) {
		printf("\nInvalid entry, please enter a number between 3 and 10, inclusive: ");
		printf("\nPlease enter the number of days, between 3 and 10, inclusive: ");
		scanf("%d", &days);

	}
	for (int i = 0; i < days; i++) {

		printf("Day %d - High: ", i + 1);
		scanf("%d", &high[i]);

		printf("Day %d - low: ", i + 1);
		scanf("%d", &low[i]);
	}

	printf("\n Day  Hi  Low");
	for (int j = 0; j < days; j++) {
		printf("\n %d    %d    %d", j + 1, high[j], low[j]);
	}

	for (int k = 0; k < days; k++) {
		if (high[k] >= hightemp) {
			hightemp = high[k];
			highday = k;
		}
		if (low[k] <= lowtemp) {
			lowtemp = low[k];
			lowday = k;
		}
	}
	printf("\nThe highest tmperature was %d, on day %d", hightemp, highday + 1);
	printf("\nThe lowest tmperature was %d, on day %d", lowtemp, lowday + 1);
	do {
		printf("\n Enter a number between 1 and 4 to see the average temperature for the entered number of days, enter a negative number to exit: ");
		scanf("%d", &num);
		while (num == 0 || num > 4) {
			printf("Invalid entry, please enter a number between 1 and 4, inclusive: ");
			scanf("%d", &num);
		}
		if (num < 0) {
			printf("Goodbye");
			return num;
		}
		sum = 0;
		//take average of day entered.
		for (int p = 0; p < num; p++) {
			sum += high[p] + low[p];

		}
		avr = sum / (num * 2);
		printf("The average temperature up to day %d is: %.2lf ", num, avr);
	} while (days > 0 || days < 4);
	return 0;
}

void title() {
	printf("********************************\n");
	printf("******** lab 4- IPC Temperature Calculator V2.0**********\n");
	printf("********************************");
}
