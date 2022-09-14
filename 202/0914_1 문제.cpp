#include <iostream>
#include <string>

using namespace std;

template<typename T>

T sum(T x, T y)
{
	T z = x + y;
	return z;
}


int main(void)
{
	cout << sum<int>(3, 2) << endl;
	cout << sum<double>(3.0, 4.3) << endl;
}