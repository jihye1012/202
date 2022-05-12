#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
	int nHakbun;
	string sName;

	//������ : ��ü�� ������ �� ȣ��Ǵ� �Լ�
public:
	Student(void);
	Student(int Hakbun, string Name);
	void show(void);

};
//class Student
//{
//private:
//	int sHakbun;
//	string sName;
//
//	//������ : ��ü�� ������ �� ȣ��Ǵ� �Լ�
//public:
//	Student(void)
//	{
//		sHakbun = 1234;
//		sName = "�̻��";
//		cout << "�й��� ��ϵǾ����ϴ�" << endl;
//	}
//	void show(void)
//	{
//		cout << "�й��� " << sHakbun << "�Դϴ�" << endl;
//		cout << "�̸��� " << sName << "�Դϴ�" << endl;
//	}
//};

int main(void)
{
	Student *stu1=new Student();
	Student *stu2 = new Student(1111,"JWP");
	stu1->show();
	stu2->show();
	delete stu1;
	delete stu2;
	return 0;
}
Student::Student(void)
{
	nHakbun = 1234;
	sName = "�̻��";
	cout << "�й��� ��ϵǾ����ϴ�" << endl;
}
Student::Student(int Hakbun, string Name)
	:nHakbun(Hakbun),sName(Name)
{
	/*this->nHakbun = nHakbun;
	this->sName = sName;*/
	cout << "�й��� ��ϵǾ����ϴ�" << endl;
}
void Student::show(void)
{
	cout << "�й��� " << nHakbun << "�Դϴ�" << endl;
	cout << "�̸��� " << sName << "�Դϴ�" << endl;
}