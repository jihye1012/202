#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
	Animal() { cout << "»ý¼º" << endl; }
	virtual ~Animal() { cout << "¼Ò¸ê" << endl; }


	void eat(void){ cout << "µ¿¹°¸ÔÀÌ" << endl; }
	virtual void roar(void) { cout << "µ¿¹°Â¢¾î" << endl; }
	void walk(void) { cout << "µ¿¹°°É¾î" << endl; }

private:
	string name;
	int sex;
	int age;
};
 
class Tiger : public Animal {
public:
	Tiger() { cout << "tiger »ý¼º" << endl; }
	virtual ~Tiger() { cout << "tiger ¼Ò¸ê" << endl; }
	void eat(void){ cout << "È£¶ûÀÌ¸ÔÀÌ" << endl; }
	void roar(void){ cout << "¾îÈï" << endl; }
	void walk(void){ cout << "È£¶ûÀÌ°É¾î" << endl; }
};

class Dog : public Animal {
public:
	Dog() { cout << "dog »ý¼º" << endl; }
	virtual ~Dog() { cout << "dog ¼Ò¸ê" << endl; }
	void eat(void){ cout << "°³¸ÔÀÌ" << endl; }
	void roar(void)  { cout << "¸Û¸Û" << endl; }
	void walk(void)  { cout << "°³°É¾î" << endl; }
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