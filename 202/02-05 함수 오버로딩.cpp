#include <iostream>

using namespace std;

int jegob(int a,int b)
{
	return a * a+b;
}

double jegob(double a, double b)
{
	return a * a+b;
}


int main(void)
{
	//�Լ� �����ε� (�Լ��� �̸��� ���� �Ű������� �ٸ�.)
	cout << jegob(3 + 1,7) << endl;
	cout << jegob(3.3,1.1) << endl;
	return 0;
}