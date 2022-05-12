#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
	int nHakbun;
	string sName;

	//생성자 : 객체가 생성될 때 호출되는 함수
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
//	//생성자 : 객체가 생성될 때 호출되는 함수
//public:
//	Student(void)
//	{
//		sHakbun = 1234;
//		sName = "이사랑";
//		cout << "학번이 등록되었습니다" << endl;
//	}
//	void show(void)
//	{
//		cout << "학번은 " << sHakbun << "입니다" << endl;
//		cout << "이름은 " << sName << "입니다" << endl;
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
	sName = "이사랑";
	cout << "학번이 등록되었습니다" << endl;
}
Student::Student(int Hakbun, string Name)
	:nHakbun(Hakbun),sName(Name)
{
	/*this->nHakbun = nHakbun;
	this->sName = sName;*/
	cout << "학번이 등록되었습니다" << endl;
}
void Student::show(void)
{
	cout << "학번은 " << nHakbun << "입니다" << endl;
	cout << "이름은 " << sName << "입니다" << endl;
}