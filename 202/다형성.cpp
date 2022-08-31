#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
	Animal() { cout << "»ý¼º" << endl; }
	~Animal() { cout << "¼Ò¸ê" << endl; }
	void eat(void) { cout << "µ¿¹°¸ÔÀÌ" << endl; }
	virtual void roar(void) { cout << "µ¿¹°Â¢¾î" << endl; }
	void walk(void) { cout << "µ¿¹°°É¾î" << endl; }

private:
	string name;
	int sex;
	int age;
};
 
class Tiger : public Animal {
public:
	Tiger() { cout << "»ý¼º" << endl; }
	~Tiger() { cout << "¼Ò¸ê" << endl; }
	void roar(void) { cout << "¾îÈï" << endl; }
};

class Dog : public Animal {
public:
	Dog() { cout << "»ý¼º" << endl; }
	~Dog() { cout << "¼Ò¸ê" << endl; }
	void roar(void) { cout << "¸Û¸Û" << endl; }
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