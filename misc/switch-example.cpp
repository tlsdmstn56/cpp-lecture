/**
 * 유저가 숫자를 입력하면(0 – 9), 영어로 출력하는 
 * 프로그램 작성해보기 (switch-case 문법 사용)
 * 
 * 예시1:
 *   Enter a digit: 9
 *   Your input is nine!
 * 예시2
 *   Enter a digit: 1
 *   Your input is one!
 */ 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int digit;
    printf("Enter a digit: ");
    scanf("%d", &digit);

    switch (digit)
    {
    case 0:
        printf("Your input is zero!\n");
        break;
    case 1:
        printf("Your input is one!\n");
        break;
    case 2:
        printf("Your input is two!\n");
        break;
    case 3:
        printf("Your input is three!\n");
        break;
    case 4:
        printf("Your input is four!\n");
        break;
    case 5:
        printf("Your input is five!\n");
        break;
    case 6:
        printf("Your input is six!\n");
        break;
    case 7:
        printf("Your input is seven!\n");
        break;
    case 8:
        printf("Your input is eight!\n");
        break;
    case 9:
        printf("Your input is nine!\n");
        break;
    default:
    }
    
    return 0;
}
