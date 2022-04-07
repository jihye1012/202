#include <iostream>
#include <string>
#include <stdio.h>
#include <string.h>
using namespace std;

int main(void)
{
	char cI[10] = "aaa";
	printf("%s\n", (cI));

	string cppI = "aaa";
	printf("%s\n", cppI.c_str()); //문자열의 시작주소
	return 0;
}