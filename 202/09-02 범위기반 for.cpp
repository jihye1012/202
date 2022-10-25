#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	double arr[4] = { 1.1,2.2,3.3,4.4 };
	for (int i = 0; i < 4; i++) {
		cout << arr[i] << " ";
	}
	//전통적인 for
	
	//for (double x : arr) {
	//	cout << x << " ";
	//} //범위기반 for
	return 0;
}