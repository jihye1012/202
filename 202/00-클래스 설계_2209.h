#include<iostream>
#include <string>
#include <string.h>

using namespace std;

class Person
{
public:
	void �Դ�();
	void �ڴ�();
	void �輳�ϴ�1();
	void �輳�ϴ�2();
private:
	string name;
	string address;
	string phoneNum;
	int age;
};

class baby : public Person 
{
public:
	void ���ٴϴ�();
private:
	string �¸�;

};

class �л� :public Person
{
public:
	void �����ϴ�();
	void �޽���_�Դ�();
private:
	string school;
	int studentNum;

};

class ���̽��Ͱ���л� :public �л� 
{
public: 
	void ����ĸ�_���(); 
	void ����_���Ƹ�_Ȱ����_�ϴ�();
private:
	string ����;
	
};

class ���� :public Person
{
public:
	void ����_���ô�();
	void ����_�����ϴ�();

private:
	string carNum;

};