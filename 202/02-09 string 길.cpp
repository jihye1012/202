#include <iostream>
#include <string>
#include <stdio.h>
#include <string.h>
using namespace std;

int main(void)
{
	char cI[10] = "aaa";
	printf("%d\n", strlen(cI));
	string cppI = "aaa";
	cout << cppI.size() << endl;
	cout << cppI.length() << endl;
	return 0;
}