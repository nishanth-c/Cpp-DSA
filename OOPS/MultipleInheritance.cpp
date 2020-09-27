#include <iostream>
using namespace std;

class Grandpa
{
public:
	int Wealth = 100000;
};
class Parent1:virtual public Grandpa
{
public:
	int MotherWealth = 200000;
};
class Parent2:virtual public Grandpa
{
public:
	int fatherWealth = 200000;
};
class Child:public Parent1,public Parent2
{
public:
Child()
{
	cout<<"Granpa Wealth:"<<Wealth<<endl;
}
};

int main()
{
	Child a;
	return 0;
}
