#include <bits/stdc++.h>
using namespace std;

string dectobin(int n )
{
	string x = "";
	for(int i =0;n>0;i++)
	{
	x = x+to_string(n%2);
	n =n/2;
	}
	reverse(x.begin(),x.end());
	return x;
}
int main()
{
	int n;
	cin>>n;
	int sum = 0;
	for(int i = 1;i<=n;i++)
	{

		sum+=stoi(dectobin(i));
	}

	cout<<sum<<endl;
	return 0;
}