#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
	Animal() { cout << "����" << endl; }
	virtual ~Animal() { cout << "�Ҹ�" << endl; }


	void eat(void){ cout << "��������" << endl; }
	virtual void roar(void) { cout << "����¢��" << endl; }
	void walk(void) { cout << "�����ɾ�" << endl; }

private:
	string name;
	int sex;
	int age;
};
 
class Tiger : public Animal {
public:
	Tiger() { cout << "tiger ����" << endl; }
	virtual ~Tiger() { cout << "tiger �Ҹ�" << endl; }
	void eat(void){ cout << "ȣ���̸���" << endl; }
	void roar(void){ cout << "����" << endl; }
	void walk(void){ cout << "ȣ���̰ɾ�" << endl; }
};

class Dog : public Animal {
public:
	Dog() { cout << "dog ����" << endl; }
	virtual ~Dog() { cout << "dog �Ҹ�" << endl; }
	void eat(void){ cout << "������" << endl; }
	void roar(void)  { cout << "�۸�" << endl; }
	void walk(void)  { cout << "���ɾ�" << endl; }
};

void main(void)
{
	//Animal animal;
	//animal.roar();

	//Animal* animal = new Animal();
	//animal->roar();
	//delete animal;

	//Dog* dog = new Dog();
	//dog->roar();
	//delete dog;

	Animal* animal = new Tiger();
	delete animal;
		
	//Dog dog;
	//dog.roar();
}