/**
 * 백준 2438: 별찍기 1
 * 
 * 첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제
 * 
 * 예시:
 *   Enter n: 3 
 *   *
 *   **
 *   ***
 *   ****
 *   *****
 */ 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    for (int num_star = 1; num_star <= n; ++num_star)
    {
        for (int star = 0; star<num_star; ++star)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
