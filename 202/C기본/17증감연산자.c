#include <stdio.h>

int main(void)
{
	int a, b, c = 0; //c�� 0��
	a = ++c; //c���� ���� c=1, a=1
	b = c++; //���� b�� ���� b=1, c=2

	printf("%d %d %d \n", a, b, ++c);

	return 0;
}