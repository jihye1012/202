#include <iostream>
#include <string>

using namespace std;

enum Food {
	KOREAN,  //�ѽ� 0
	JAPANESE, //�Ͻ� 1
	CHINESE, //�߽� 2
	COUNT  //�Ѱ��� 3
};

int main(void)
{
	string food_spot[Food::COUNT];

	food_spot[Food::KOREAN] = "�����";
	food_spot[Food::JAPANESE] = "��Ű�丮��";
	food_spot[Food::CHINESE] = "��ȭ��";

	cout << "�޴�����" << endl;
	int menu = 1;

	switch (menu)
	{
	case Food::KOREAN:
		cout << "�ѽ� : ";
		break;
	case Food::JAPANESE:
		cout << "�Ͻ� : ";
		break;
	case Food::CHINESE:
		cout << "�߽� : ";
		break;

	default:
		break;
	}
	cout << food_spot[menu] << endl;

	return 0;
}
