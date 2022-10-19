#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(void)
{
	map<string, string>m;
	m["응답하라 1988"] = "2015";
	m["꽃보다 남자"] = "2009";
	m["달의 연인 - 보보경심 려"] = "2016";
	m["슬기로운 의사생활1"] = "2020";

	map<string, string> ::iterator iter;

	for (iter = m.begin(); iter != m.end(); iter++)
	{
		cout <<"드라마 제목 : "<< iter->first <<" / 방영년도 : "<< iter->second  << endl;
	}
	cout << endl;

	m.erase("슬기로운 의사생활1");

	for (iter = m.begin(); iter != m.end(); iter++)
	{
		cout << "드라마 제목 : " << iter->first << " / 방영년도 : " << iter->second << endl;
	}
	cout << endl;

	return 0;
}