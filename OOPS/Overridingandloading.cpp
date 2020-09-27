#include <iostream>
using namespace std;
class Transport
{
public:
int wheels =4;
int Medium;
void drive();
void drive(int x)
{
	cout <<" I am driving with "<<x<<" Wheels #Overloaded \n";
}
};

void Transport::drive()
{cout<<"I am Driving\n";}

class Car:public Transport
{
public:


	void drive() // Overriding
	{
		cout <<"I am Driving a Car #Overrided\n";
	}

};

int main()
{
	Car BMW;
	BMW.drive();
	Transport T;
	T.drive(4);
	T.drive();

	return 0;
}
