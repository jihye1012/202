#include <iostream>
#include <string>
#include <stdio.h>
#include <string.h>
using namespace std;

int main(void)
{
	char cI[] = "aaa", cJ[] = "aaa", cK[] = "abc";
	printf("%d \n", strcmp(cI, cJ) == 0);
	printf("%d \n", strcmp(cI, cK) < 0);

	string cppI = "aaa", cppJ = "aaa", cppK = "abc";
	cout << (cppI == cppJ) << endl;
	cout << (cppI < cppK) << endl;

	return 0;
}