#include <iostream>
#include <string>
#include <map>

using namespace std;

//김신 공유
//지은탁 김고은
//저승사자 이동욱
//써니 유인나

//arr["김신"] = 공유

int main(void)
{
	map<string, string>m;
	m.insert(pair<string, string>("김신", "공유"));
	m.insert(pair<string, string>("지은탁", "김고은"));
	m.insert(pair<string, string>("저승사자", "이동욱"));
	m.insert(pair<string, string>("써니", "유인나"));


	map<string,string> ::iterator iter;

	//벡터의 원소들을 출력 (iterator)
	//삽입할때마다 key는 자동정렬

	for (iter = m.begin(); iter != m.end(); iter++)
	{
		cout << iter->first << "역 " << iter->second << "분" << endl;
		//cout << (*iter).first << "역 " << (*iter).second << "분" << endl;
	}
	cout << endl;

	map<string, string> ::iterator actor = m.find("김신");

	//key가 존재하는지 체크
	if(actor != m.end())
		cout << "주인공은 " << actor->second << endl;

	return 0;
}