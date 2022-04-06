#include <iostream>

using namespace std;

//pre컴파일러가 처리
//자료형 영향받지 않음

#define jegob(A) A * A //;안씀

int main(void)
{
	//연산자 우선 순위 때문에 의도치 않은 결과가 나옴.
	cout << jegob(3+1) << endl; //7
	cout << 3+1*3+1 << endl; //7
	return 0;

}