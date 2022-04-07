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
	//함수 오버로딩 (함수의 이름은 같고 매개변수가 다름.)
	cout << jegob(3 + 1,7) << endl;
	cout << jegob(3.3,1.1) << endl;
	return 0;
}