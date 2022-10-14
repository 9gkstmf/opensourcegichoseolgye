#include <stdio.h>

int main(void)
{
	int x, y;

	printf("두 수를 입력하세요.\n");
	scanf_s("%d %d", &x, &y);
	if (x > y) {
		printf("%d는 %d보다 큽니다.", x, y);
	}

	if (y > x) {
		printf("%d는 %d보다 큽니다.", y, x);
	}

	return 0;
}