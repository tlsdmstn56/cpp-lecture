/*
 * Programming Project 6
 *
 *   - calculate (((((3x + 2)x - 5)x - 1)x + 7)x - 6)
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

	int polynomial = 3 * x + 2;
	polynomial = polynomial * x - 5;
	polynomial = polynomial * x - 1;
	polynomial = polynomial * x + 7;
	polynomial = polynomial * x - 6;

	printf("Polynomial result: %d\n", polynomial);

	return 0;
}
