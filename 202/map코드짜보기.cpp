#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(void)
{
	map<string, string>m;
	m["�����϶� 1988"] = "2015";
	m["�ɺ��� ����"] = "2009";
	m["���� ���� - ������� ��"] = "2016";
	m["����ο� �ǻ��Ȱ1"] = "2020";

	map<string, string> ::iterator iter;

	for (iter = m.begin(); iter != m.end(); iter++)
	{
		cout <<"��� ���� : "<< iter->first <<" / �濵�⵵ : "<< iter->second  << endl;
	}
	cout << endl;

	m.erase("����ο� �ǻ��Ȱ1");

	for (iter = m.begin(); iter != m.end(); iter++)
	{
		cout << "��� ���� : " << iter->first << " / �濵�⵵ : " << iter->second << endl;
	}
	cout << endl;

	return 0;
}