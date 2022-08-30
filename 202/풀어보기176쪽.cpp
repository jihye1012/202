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
		cout <<"Student 일반생성자 호출"<< endl;
	}
	~Student()
	{
		cout << "소멸자 호출" << endl;
	}
	void PrintShow();
	
};
int main(void)
{
	Student s = Student("양지혜", "2209", "서울대학교");
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