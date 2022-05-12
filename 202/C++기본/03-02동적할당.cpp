#include <iostream>

using namespace std;

int main(void)
{
	int* ptr = new int;
	*ptr = 20;

	cout << *ptr << endl;

	delete ptr;
}