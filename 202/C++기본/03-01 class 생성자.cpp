#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
	int sHakbun;
	string sName;

	//������ : ��ü�� ������ �� ȣ��Ǵ� �Լ�
	//����Ʈ �����ڸ� �����Ϸ��� ������ش�.
	//Student(){}
};

int main(void)
{
	Student stu1;
	Student stu2 = Student();

	return 0;
}