/**
 * 백준 8398: 합
 * 
 * n이 주어졌을 때, 1부터 n까지 합을 구하는 프로그램을 작성하시오.
 * 
 * 예시:
 *   Enter n: 3 
 *   Sum from 1 to n is: 6
 */ 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int result = 0;
    for (int i = 1; i <= n; ++i)
    {
        result += i;
    }

    printf("Sum from 1 to n is: %d\n", result);    
    return 0;
}
