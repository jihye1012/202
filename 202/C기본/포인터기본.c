#include <stdio.h>

int main(void)
{
	int num1 = 10, num2 = 20, num3 = 30;

	//ptr1 ¢º num1, ptr2 ¢º num2, ptr3 ¢º num3
	int* ptr1 = &num1;
	int* ptr2 = &num2;
	int* ptr3 = &num3;

	ptr3 = ptr2;
	ptr2 = ptr1;
	ptr1 = ptr2;

	printf("%d %d %d \n", *ptr1, *ptr2, *ptr3);

	return 0;
}