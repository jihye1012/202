#include <iostream>

using namespace std;

int jegob(int a,int b=1) //�����ʿ��� �� ��������
{
	return a * a+b;
}

double jegob(double a, double b=1.1) //�����ʿ��� �� ��������
{
	return a * a+b;
}


int main(void)
{
	
	cout << jegob(4) << endl; // jegob(4,1)
	cout << jegob(3.3) << endl; //jegob(3.3,1.1)
	return 0;
}