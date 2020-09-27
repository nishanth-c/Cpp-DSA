#include <bits/stdc++.h>
using namespace std;

int fact(int);

int main()
{	
	while(1)
	{
	int n;
	cout<< "Choose a number:"<<endl;
	cin>> n;
	cout << fact(n)<<endl;
}
	return 0;
}

int fact(int n)
{
	if((n==0) || (n==1))
		return 1;
	else
	{
		return n*fact(n-1);
	}
}