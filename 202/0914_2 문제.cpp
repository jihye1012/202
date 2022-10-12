#include <iostream>
#include <string>

using namespace std;

template <typename T1,typename T2>

class Character {
public:
	//Character<int, string>(T2 _name, T1 _hp, T1 _offense, T1 _defense);
	Character(T2 _name, T1 _hp, T1 _offense, T1 _defense)
		:name(_name), hp(_hp), offense(_offense), defense(_defense) {}

	//void print(void);
	void print(void)
	{
		cout << "이름 " << name << endl;
		cout << "체력 " << hp << endl;
		cout << "공격 " << offense << endl;
		cout << "방어 " << defense << endl;
	}

private:
	T2 name;
	T1 hp;
	T1 offense;
	T1 defense;
};


int main(void)
{
	Character<int, string>* ch1 = new Character<int, string>("jihye", 100, 30,15 );
	ch1->print();
	delete ch1;
	return 0;
}
