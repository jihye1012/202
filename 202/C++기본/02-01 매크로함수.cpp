#include <iostream>

using namespace std;

//pre컴파일러가 처리
//자료형 영향받지 않음

#define jegob(A) A * A //;안씀

int main(void)
{
	cout << jegob(3) << endl;
	cout << 3*3 << endl;
	return 0;

}