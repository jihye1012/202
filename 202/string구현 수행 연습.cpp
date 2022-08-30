#pragma warning (disable:4996)
#include <iostream>
#include<cstring>

using namespace std;

class m_string {
	char* _Myptr; //실제 문자열의 시작주소를 담고 있는 포인터
	int _Mysize; //문자열의 글자수

public:
	m_string() {
		_Mysize = 0;
		_Myptr = NULL;
	}

	 int size(void) {
		_Mysize = strlen(_Myptr) ;
		return _Mysize;
	}
	m_string(const char* c)
	{
		_Mysize = strlen(c) + 1; //NULL
		_Myptr = new char[_Mysize];
		strcpy(_Myptr, c);
	}
	m_string(const int _Mysize)
	{
		this->_Mysize = _Mysize;
		_Myptr = new char[_Mysize];
	}
	m_string(const int data, const char dol)
	{
		_Myptr = new char[data + 1];
		for (int i = 0; i < data; i++)
		{
			_Myptr[i] = dol;
		}
		_Myptr[data] = NULL;
	}

	m_string(const m_string& aa) {
		_Mysize = strlen(aa._Myptr) + 1;
		_Myptr = new char[_Mysize];
		strcpy(_Myptr, aa._Myptr);
	}

	m_string& operator +(const m_string& s)
	{
		char* c = new char[this->_Mysize + s._Mysize - 1];
		strcpy(c, this->_Myptr);
		strcat(c, s._Myptr);
		m_string temp(c);
		delete[]c;
		return temp;
	}

	m_string& operator +(const char* c )
	{
		char* temp;
		_Mysize = strlen(this->_Myptr) + strlen(c) + 1;
		temp = new char[_Mysize];
		strcpy(temp, this->_Myptr);
		delete[] _Myptr;
		this->_Myptr = new char[_Mysize];
		strcpy(this->_Myptr, temp);
		delete[](temp);
		strcat(this->_Myptr, c);
		return *this;
	}


	m_string& operator =(const char* c)
	{
		_Mysize = strlen(c) + 1;
		_Myptr = new char[_Mysize];
		strcpy(_Myptr, c);
		return *this;
	}

	m_string& operator ==(const char* c)
	{
		char* temp;
		_Mysize = strlen(this->_Myptr) + strlen(c) + 1;
		temp = new char[_Mysize];
		strcpy(temp, this->_Myptr);
		delete[] _Myptr;
		this->_Myptr = new char[_Mysize];
		strcpy(this->_Myptr, temp);
		delete[](temp);
		//strcmp(_Myptr, c);
		return *this;
	}

	bool operator== (const m_string& s) {
		return strcmp(this->_Myptr, s._Myptr) ? false : true;
	}



	char& operator[](int dol)
	{
		return this->_Myptr[dol];
	}

	m_string& operator=(const m_string& cc) {
		_Mysize = strlen(cc._Myptr) + 1;
		_Myptr = new char[_Mysize];
		strcpy(this->_Myptr,cc._Myptr);
		return *this;
	}

	m_string(const char* a, const char* b)
	{
		_Mysize = b - a + 1;
		_Myptr = new char[_Mysize];
		for (int i = 0; i < _Mysize; i++)
		{
			_Myptr[i] = a[i];
		}
		_Myptr[_Mysize - 1] = NULL;
	}

	~m_string() {
		delete[] _Myptr;
	}
	friend istream& operator>>(istream& is, m_string& ms);
	friend ostream& operator<<(ostream& os, const m_string& ms);
	
};
ostream& operator<<(ostream& os, const m_string& ms)
{
	os << ms._Myptr;
	return os;
}

istream& operator>>(istream& is, m_string& ms)
{
	char* buf = new char[1000];
	is >> buf;
	ms._Mysize = strlen(buf);
	ms._Myptr = new char[ms._Mysize];

	strcpy(ms._Myptr, buf);

	delete[]buf;
	return is;
}


int main(void)
{
	m_string str1 = "123";
	cout << str1 << " " << str1.size() << endl;

	m_string str2 = str1;
	cout << str2 << " " << str2.size() << endl;

	str2 = "m_string";
	cout << str2 << " " << str2.size() << endl;

	str2 = str2 + str1;
	cout << str2 << " " << str2.size() << endl;

	str2 = str2 + "ab";
	cout << str2 << " " << str2.size() << endl;

	cout << (str1 == "123") << endl;
	cout << (str1 == str2) << endl;

	return 0;
}