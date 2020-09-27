#include <bits/stdc++.h>
using namespace std;

void fact(int,int,string);

int main()
{
	int n;
	cout << "Enter a no. : ";
	cin>>n;
	fact(n,2,"1 ");
	return 0;
}

void fact(int n, int p,string s)
{
	if(n==1)
	{
		cout << s <<endl;
		return;
	}
	for(int i = p;i<=n;i++)
	{
	if(n%i == 0)
	{
		fact(n/i,i,s+to_string(i)+" ");
	}
	}
}