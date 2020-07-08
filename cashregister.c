/********************************************************************************
                           Computations
This program prints amount owed in loonies, quarters, dimes, nickels and pennies
*********************************************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print();

int main()
{
    print();

    double _price;
    double _balance;

    printf("Please enter the amount to be paid: $ ");  // user enters price of item
    scanf("%lf", &_price);
    printf("Amount to be Paid: $%.2lf\n", _price);

    double _gst = _price * 0.13 + 0.005;  // calculate tax tax
    _price = _price + _gst;   // add tax
    printf("GST: %.2lf", _gst); //print tax amount
    printf("\nBalance Owing: %.2lf\n", _price); // print out total amount to be paid

    int _loonies = _price; // calculate number of loonies in the amount
    _balance = _price - _loonies; // subtract amount of loonies from balance
    printf("loonies required: %d, Blanace owing %.2lf\n", _loonies, _balance);

    int _quarters = _balance / 0.25; // calculate number of quarters in the amount
    _balance = _balance - 0.25 * _quarters; // subtract amount of quarters from balance
    printf("Quarters required: %d, Balance owing: %.2lf", _quarters, _balance);

    int _dimes = _balance / 0.10; // calculate number of dines in the amount
    _balance = _balance - (0.10 * _dimes); // subtract amount of dimes from balance
    printf("\nDimes required: %d, Balance owing: %.2lf\n", _dimes, _balance);

    int _nickels = _balance / 0.05; // calculate number of nickels in the amount
    _balance = _balance - (0.05 * _nickels); // subtract amount of nickels from balance
    printf("Nickels required: %d, Balance owing: %.2lf\n", _nickels, _balance);

    int _pennies = _balance / 0.01; // calculate number of pennies in the amount
    _balance = _balance - (0.01 * _pennies); // subtract amount of pennies from balance
    printf("Pennies required: %d, Balance owing: %.2lf\n", _pennies, _balance);
    return 0;
}

void print() {

    printf("********************************\n");
    printf("********** LAB 2 ************\n");
    printf("********************************\n");

}
