#include <iostream>

using namespace std;

int main(void)
{
	int a;
	cout << "HELLO!!!!!!!" << endl; //std::cout 에서 namespce를 써서 축약

	//scanf("%d",&a);
	cin >> a;

	cout << a << "(이)가 입력되었습니다." << endl;
	return 0;
}