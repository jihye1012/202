#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
	int sHakbun;
	string sName;

	//생성자 : 객체가 생성될 때 호출되는 함수
public:
	Student(void)
	{
		sHakbun = 1234;
		sName = "이사랑";
		cout << "학번이 등록되었습니다" << endl;
	}
	void show(void)
	{
		cout << "학번은 " << sHakbun << "입니다" << endl;
		cout << "이름은 " << sName << "입니다" << endl;
	}
};

int main(void)
{
	Student stu1;
	Student stu2 = Student();
	stu2.show();
	return 0;
}