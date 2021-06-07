/*
 * Programming Project 5
 * 
 *   - calculate 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6
 *   - asks x value from user
 *   - Hint: c does not have exponentiation operator
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x;
	printf("Enter x value: ");
	scanf("%d", &x);

	int polynomial = 3 * x * x * x * x * x;
	polynomial += 2 * x * x * x * x;
	polynomial -= 5 * x * x;
	polynomial -= x * x;
	polynomial += 7 * x;
	polynomial -= 6;

	printf("Polynomial result: %d\n", polynomial);

	return 0;
}
