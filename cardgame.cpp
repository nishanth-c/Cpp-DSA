#include <iostream>
#include <string>
using namespace std;

int main()
{
	int T;
	string t,c,str;
	cin>>T;
	while(T--)
	{
		cin>>t;
		for(int i = 0;i<5;i++)
		{
			cin>>c;
			str+=c;
		}

		size_t found = str.find_first_of(t);
		if(found != str.npos)
		cout<<"YES"<<endl;	
		else
		cout<<"NO"<<endl;
		str.clear();



	}
	return 0;

}