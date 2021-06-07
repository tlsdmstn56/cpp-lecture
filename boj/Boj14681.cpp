/*
 * 백준14681: 사분면 고르기
 * 
 * 점의 좌표를 입력받아 그 점이 어느 사분면에 속하는지 
 * 알아내는 프로그램을 작성하시오. 단, x좌표와 y좌표는 
 * 모두 양수나 음수라고 가정한다.
 * 
 * 입력: 첫 줄에는 정수 x가 주어진다. 다음 줄에는 정수 y가 주어진다.
 * 출력: 점 (x, y)의 사분면 번호(1, 2, 3, 4 중 하나)를 출력한다.
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x, y;
	scanf("%d", &x);
	scanf("%d", &y);

	if (x > 0 && y > 0) {
		printf("%d\n", 1);
	}
	else if (x < 0 && y > 0) {
		printf("%d\n", 2);
	}
	else if (x < 0 && y < 0) {
		printf("%d\n", 3);
	}
	else {
		printf("%d\n", 4);
	}

	return 0;
}
