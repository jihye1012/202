#include <iostream>

using namespace std;


int main(void)
{
	int a;
	//참조로 a값 바꿈
	int& ra = a;
	ra = 30;
	cout << a << endl;//30
	//포인터로 a 바꾸기
	int* pa = &a;
	*pa = 50;
	cout << a << endl;//50
	return 0;

}