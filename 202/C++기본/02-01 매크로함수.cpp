#include <iostream>

using namespace std;

//pre�����Ϸ��� ó��
//�ڷ��� ������� ����

#define jegob(A) ((A) * (A)) //;�Ⱦ�

int main(void)
{
	cout << jegob(3+1) << endl; //16
	cout << ((3+1)*(3+1)) << endl; //16
	return 0;

}