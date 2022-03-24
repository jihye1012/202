#include <stdio.h>

int main(void)
{
	int a, b, c = 0; //c만 0임
	a = ++c; //c먼저 증가 c=1, a=1
	b = c++; //먼저 b에 대입 b=1, c=2

	printf("%d %d %d \n", a, b, ++c);

	return 0;
}