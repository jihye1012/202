#include <iostream> 
#include <string>

using namespace std;

class Person
{
public:
	string name;
	int hakbun;
	Person(string name, int hakbun);
	void PrintShow();

};

class Student : public Person
{
private:
	string university;
public:
	Student(string name, int hakbun, string university)
		:Person(name, hakbun),university(university)
	{
		cout <<"Student �Ϲݻ����� ȣ��"<< endl;
	}
	~Student()
	{
		cout << "�Ҹ��� ȣ��" << endl;
	}
	void PrintShow();
	
};
int main(void)
{
	Student s = Student("������", "2209", "������б�");
	s.PrintShow();
	return 0;
}
Person::Person(string name, int hakbun)
{

}
void Person::PrintShow()
{
	cout << name<< hakbun << endl;
}
void Student::PrintShow()
{
	cout << name << hakbun << endl;
}