#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>   
int main() {
    /// true/false(bool type)을 나타내는 format specifier는 존재하지 않음
    /// %d 정수형으로 표현:
    ///   1 = true
    ///   0 = false
    printf("10 == 10 is %d \n", 10 == 10);
    printf("10 != 10 is %d\n", 10 != 10);
    printf("10 > 5 is %d\n", 10 > 5);
    printf("10 < 5 is %d\n", 10 < 5);
    printf("10 >= 10 is %d\n", 10 >= 10);
    printf("10 <= 5 is %d\n", 10 <= 5);
    return 0;
}
