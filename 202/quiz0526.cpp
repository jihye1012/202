#include <iostream>
#include <string.h>

using namespace std;

class CBank {
private:
	string name;
	string account;
	int balance;
public:
	//������ �ۼ�
	CBank(string name, string account, int balance) {
		this->name = name;
		this->account = account;
		this->balance =balance ;

	}
	//�ԱݵǴ� �ݾ��� ����ϴ� �Լ� �ۼ�
	int Bank(int money) {
		balance += money;
		cout << balance <<"��"<< endl;
	}
};
int main() {
	
	return 0;
}