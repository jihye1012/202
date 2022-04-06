#include <iostream>

using namespace std;

//컴파일러가 처리
//자료형에 영향받음
//디버깅이 수월함 (매크로함수는 불편)
inline int jegob(int A)
{
	return A * A;
}

int main(void)
{
	cout << jegob(3 + 1) << endl;
	cout << ((3 + 1) * (3 + 1)) << endl;
	return 0;

}