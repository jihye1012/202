#include <iostream>

using namespace std;

int main(void)
{
	int* ptr = new int[4];
	for (int i = 0; i < 4; i++)
	{
		ptr[i] = 10 + i;
		cout << ptr[i] << "  ";
	}

	
	delete[]ptr;
	return 0;
}