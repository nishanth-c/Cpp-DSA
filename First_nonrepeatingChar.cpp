#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
	string inp;
	getline(cin,inp);
	map <char,int> hash;
	for(int i =0; i<inp.length();i++)
	{
		hash[inp[i]] +=1;
	}
	for(int i =0; i<inp.length();i++)
	{
		if(hash[inp[i]] == 1)
		{
			cout<<inp[i]<<endl;
			break;
		}

	}
	return 0;
}