#include <iostream>

using namespace std;


int main(void)
{
	int a;
	//������ a�� �ٲ�
	int& ra = a;
	ra = 30;
	cout << a << endl;//30
	//�����ͷ� a �ٲٱ�
	int* pa = &a;
	*pa = 50;
	cout << a << endl;//50
	return 0;

}