#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
	int sHakbun;
	string sName;

	//������ : ��ü�� ������ �� ȣ��Ǵ� �Լ�
public:
	Student(void)
	{
		sHakbun = 1234;
		sName = "�̻��";
		cout << "�й��� ��ϵǾ����ϴ�" << endl;
	}
	void show(void)
	{
		cout << "�й��� " << sHakbun << "�Դϴ�" << endl;
		cout << "�̸��� " << sName << "�Դϴ�" << endl;
	}
};

int main(void)
{
	Student stu1;
	Student stu2 = Student();
	stu2.show();
	return 0;
}