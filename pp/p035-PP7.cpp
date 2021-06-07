/*
 * Programming Project 7
 *
 *   - user input dollar amount
 *   - calculate the smallest number of $20, $10, $5, and $1 bills
 * 
 * Example output:
 *   Enter a dolloar amount: 93
 *   $20 bills: 4
 *   $10 bills: 1
 *   $5 bills: 0
 *   $1 bills: 3
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int amount;
	printf("Enter a dolloar amount: ");
	scanf("%d", &amount);

	printf("$20 bills: %d\n", amount / 20);
	amount = amount % 20;

	printf("$10 bills: %d\n", amount / 10);
	amount = amount % 10;

	printf("$5 bills: %d\n", amount / 5);
	amount = amount % 5;

	printf("$1 bills: %d\n", amount);

	return 0;
}
