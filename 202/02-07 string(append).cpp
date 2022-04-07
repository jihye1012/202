#include <iostream>
#include <string>
#include <stdio.h>
#include <string.h>
using namespace std;

int main(void)
{
	char cMunja[20];
	strcpy(cMunja, "c_insert");
	strcat(cMunja, "++");
	printf("%s\n", cMunja);
	std::string cppMunja;
	cppMunja = "cpp_insert";
	cppMunja = cppMunja + "++";
	cout << cppMunja << endl;

	return 0;
}