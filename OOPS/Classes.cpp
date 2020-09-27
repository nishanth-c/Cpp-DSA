#include <iostream>
class bot
{
public:
	bot(char x)
	{
		std::cout<< "You just Instiated"<<x<<"\n";
	}
	void hello()
	{
		std::cout <<"Hello World \n";
	}
	void Seeyou();
}; 

void bot::Seeyou(){ std::cout<<"See you\n";}

int main()
{
	bot a('1');
	bot b = bot('2');
	a.hello();
	b.Seeyou();
	return 0;
}