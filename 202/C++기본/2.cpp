#include <iostream>
#include <string.h>

using namespace std;

class CBox {
public:
	double width;
};
class ChildBox : CBox {
public:
	void setWidth(double w) {
		width = w;
	}
};
class Phone {
	void call();
	void receive();
	void sendMessage();
};

class Music
{
	void soundOn();
	void soundOff();
};

class SmartPhone1:Phone{
public:
	SmartPhone1();
};

class SmartPhone2 :Music{
public:
	SmartPhone2();
};