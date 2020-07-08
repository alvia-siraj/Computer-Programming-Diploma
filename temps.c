// Alvia Siraj
//lab 3 IPC redo
// may 7 2020

/********************************************************************************
                           LOGIC
This program recieves high and low temp for a number of days from user and displays
average temperature and information for the highest and lowest days
*********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
# define NUMS 4

void print();

int main() {
	
	print();
	printf("\n---=== IPC Temperature Analyzer ===--\n");
	
	int _hightemp;
	int _lowtemp;
	double _avg;
	double total = 0;
	int high=-41;
	int highday;
	int low=41;
	int lowday;
	for (int _days = 1; _days <= NUMS; _days++) {

		printf("\nEnter high value for day %d: ", _days);
		scanf("%d", &_hightemp);

		printf("\nEnter low value for day %d: ", _days);
		scanf("%d", &_lowtemp);

		while (_hightemp>=41 || _hightemp <_lowtemp || _lowtemp <= -41) 
		{			
			printf(" Incorrect values, temperatures must be in the range -40 to 40, high must be greater than low.");

			printf("\nEnter high value for day %d: ", _days);
			scanf("%d", &_hightemp);

			printf("\nEnter low value for day %d: ", _days);
			scanf("%d", &_lowtemp);
		}
		 
		 if (_hightemp >high ) { 
			 high = _hightemp;
			 highday = _days;
		 }
		 if (_lowtemp < low) {
			 low = _lowtemp;
			 lowday=_days;
		 }

		 total += _lowtemp + _hightemp;
		 _avg = total / (NUMS * 2);
	}	
	
	printf("\nThe average temperature was: %.2lf", _avg);
	printf("\nThe highest temperature was %d, on day %d", high, highday);
	printf("\nThe lowest temperature was %d, on day %d", low, lowday);

	return 0;
}
void print() {

	printf("********************************\n");
	printf("********** LAB 3 ************\n");
	printf("********************************\n");

}
