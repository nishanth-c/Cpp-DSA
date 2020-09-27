#include <iostream>
using namespace std;

class A
{
int d;
int a;
public:
A()
{
cout<<"Class A Instantiated\n";
}
A(int X)
{
	cout<<"This is A overloaded\n";
}

public:
	void getd()
	{
		cout<< d <<" "<< a<<endl;
	}
	void setvar(int x, int y)
	{
		d = x;
		a = y;

	}

protected:
	void drive();
	void driveback();
};

void A::drive(){
	cout << "I am driving\n";
	cout <<"Variable d :"<<d<<endl;
}
void A::driveback(){
	cout << "I am driving Backwards\n";
	cout <<"Variable a :"<<a<<endl;
}

class B:public A
{
public:
	 B()
	 {
	 	cout<<"This is B\n";
	 }
	 ~B()
	 {
	 	drive();
		driveback();
	 }

};

int main()

{
	B b1;0
	b1.setvar(3,4);
	A a;
	A a1(1);
	return 0;
}
