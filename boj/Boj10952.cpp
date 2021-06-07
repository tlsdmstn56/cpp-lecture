/**
 * 백준 10952: A + B - 5
 * 
 * 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
 * 0 0을 입력 받은 경우 프로그램을 종료한다.
 * 
 * 예시:
 *   Enter a and b: 1 1
 *   2
 *   Enter a and b: 2 3
 *   5
 *   Enter a and b: 3 4
 *   7
 *   Enter a and b: 9 8
 *   17
 *   Enter a and b: 5 2
 *   7
 *   Enter a and b: 0 0 
 */ 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);

    while (!(a == 0 && b == 0))
    {
        printf("%d\n", a + b);
        printf("Enter a and b: ");
        scanf("%d %d", &a, &b);
    }
    return 0;
}
