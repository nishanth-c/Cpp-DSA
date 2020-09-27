#include <iostream>
using namespace std;

class Grandpa
{
public:
	virtual void Display()
	{
		cout<< "I am Grandpa\n";
	}
};

class Father:public Grandpa
{
public:
	void Display()
	{
		cout<< "I am Father\n";
	}
};


int main()
{
	Grandpa* G;
	Father F;
	G = &F;
	G->Display();
	return 0;
}