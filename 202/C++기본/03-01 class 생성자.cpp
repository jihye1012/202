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
};

int main(void)
{
	Student stu1;
	Student stu2 = Student();

	return 0;
}