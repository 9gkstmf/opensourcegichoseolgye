#include <stdio.h>

int main(void)
{
	int x, y;

	printf("왜 지워졌지.\n");
	scanf_s("%d %d", &x, &y);
	if (x > y) {
		printf("이해할 수 없다.%d %d", x, y);
	}

	if (y > x) {
		printf("%d왜%d지워진거야 이건 큰 수 구하기인가", y, x);
	}

	return 0;
}