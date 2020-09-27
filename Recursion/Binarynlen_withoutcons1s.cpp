#include <bits/stdc++.h>
using namespace std;

void pattern(int,string);

int main()
{
	int n;
	cout << "Enter a no. : ";
	cin>>n;
	pattern(n,"");
	return 0;
}

void pattern(int n,string s)
{
	if(s.length() == n)
	{
		cout<< s<<endl;
		return;
	}

	pattern(n,s+"0");

	if(s.length() != 0)
	{
	if(s[s.length()-1] == '0')
	pattern(n,s+"1");
	}
	else
	pattern(n,s+"1");
}