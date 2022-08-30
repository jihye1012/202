#include<iostream>
#include <string>
#include <string.h>

using namespace std;

class Person
{
public:
	void 먹다();
	void 자다();
	void 배설하다1();
	void 배설하다2();
private:
	string name;
	string address;
	string phoneNum;
	int age;
};

class baby : public Person 
{
public:
	void 기어다니다();
private:
	string 태명;

};

class 학생 :public Person
{
public:
	void 공부하다();
	void 급식을_먹다();
private:
	string school;
	int studentNum;

};

class 마이스터고등학생 :public 학생 
{
public: 
	void 방과후를_듣다(); 
	void 전공_동아리_활동을_하다();
private:
	string 전공;
	
};

class 성인 :public Person
{
public:
	void 술을_마시다();
	void 차를_운전하다();

private:
	string carNum;

};