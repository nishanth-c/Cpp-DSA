#include <bits/stdc++.h>
using namespace std;

void crack(int n,string s)
{
	if(s.length()== n)
	{
		cout<<s<<endl;
		return;
	}
	for( int i = 1;i <=9 ; i++)
		crack(n,s+to_string(i));
}
int main()
{
	while(1)
	{
		cout<<"Enter a No:";
		int n;
		cin>>n;
		crack(n,"");

	}
	return 0;
}