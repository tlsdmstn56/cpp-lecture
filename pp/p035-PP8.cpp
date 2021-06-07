/*
 * Programming Project 8
 *
 *   Write a program that calculates the ramining balance on a loan
 *   after the first, second, and third monthly payment
 *
 *     - calculate the smallest number of $20, $10, $5, and $1 bills
 *
 * Example output:
 *   Enter amount of loan: 20000.00
 *   Enter interest rate: 6.0
 *   Enter monthly payment: 386.66
 *
 *   Balance remaining after first payment: $19713.34
 *   Balance remaining after second payment: $19425.25
 *   Balance remaining after third payment: $19134.71
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	float loan, rate, payment;
	printf("Enter amount of loan: ");
	scanf("%f", &loan);
	printf("Enter interest rate: ");
	scanf("%f", &rate);
	printf("Enter monthly payment: ");
	scanf("%f", &payment);

	rate /= 12;

	// first month payment
	loan *= (100 + rate) / 100; // apply interest rate
	loan -= payment;
	printf("Balance remaining after first payment: %f\n", loan);

	// second month payment
	loan *= (100 + rate) / 100; // apply interest rate
	loan -= payment;
	printf("Balance remaining after second payment: %f\n", loan);

	// third month payment
	loan *= (100 + rate) / 100; // apply interest rate
	loan -= payment;
	printf("Balance remaining after third payment: %f\n", loan);

	return 0;
}
