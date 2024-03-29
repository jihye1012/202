#include <iostream>
#include <string>

using namespace std;

class Champ {
public:
	Champ(int age, const string& name)
		:mAge(age), mName(name)
	{
		mCount++;
	}
	static int getCount(void) {
		//일반 멤버변수는 static 멤버함수에 적용할 수 없다.
		return mCount;
	}
private:
	int mAge;
	string mName;
	static int mCount;
};
int Champ::mCount = 0;

int main(void) {
	//객체 없이도 static 멤버함수 호출가능
	cout << Champ::getCount() << endl;

	Champ* teemo = new Champ(15, "티모");
	Champ* masteryi = new Champ(20, "마이");
	Champ* veign = new Champ(24, "베인");

	//mCount는 객체가 공유되어 총 3번 증가
	cout << Champ::getCount() << endl;
	cout << teemo->getCount() << endl;
}