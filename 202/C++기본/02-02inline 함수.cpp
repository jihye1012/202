#include <iostream>

using namespace std;

//�����Ϸ��� ó��
//�ڷ����� �������
//������� ������ (��ũ���Լ��� ����)
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