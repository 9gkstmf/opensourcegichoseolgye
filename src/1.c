#include <stdio.h>

int main(void)
{
	int x, y;

	printf("�� ���� �Է��ϼ���.\n");
	scanf_s("%d %d", &x, &y);
	if (x > y) {
		printf("%d�� %d���� Ů�ϴ�.", x, y);
	}

	if (y > x) {
		printf("%d�� %d���� Ů�ϴ�.", y, x);
	}

	return 0;
}