#include <iostream>
#include <string>
#include <map>

using namespace std;

//��� ����
//����Ź �����
//���»��� �̵���
//��� ���γ�

//arr["���"] = ����

int main(void)
{
	map<string, string>m;
	m["���"]= "����";
	m["����Ź"] = "�����";
	m["���»���"] = "�̵���";
	m["���"] = "���γ�";
	//m.insert(pair<string, string>("���", "����"));

	

	//map<string,string> ::iterator iter;

	//������ ���ҵ��� ��� (iterator)
	//�����Ҷ����� key�� �ڵ�����

	for (auto iter = m.begin(); iter != m.end(); iter++)
	{
		cout << iter->first << "�� " << iter->second << "��" << endl;
		//cout << (*iter).first << "�� " << (*iter).second << "��" << endl;
	}
	cout << endl;

	map<string, string> ::iterator actor = m.find("���");

	//key�� �����ϴ��� üũ
	if(actor != m.end())
		cout << "���ΰ��� " << actor->second << endl;

	return 0;
}