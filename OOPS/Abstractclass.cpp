#include <iostream>
using namespace std;

class Transport
{
public:
	int wheels;
	int Medium;
	virtual void drive() = 0;
};

class car:public Transport
{
public:
	void drive()
	{
		cout <<"I am Driving with wheels = "<<wheels<<endl;
	}
};

int main()
{
	Transport *ptr;
	car BMW;
	ptr =&BMW;
	ptr->wheels = 4;
	BMW.drive();
	return 0;
}
