#include <bits/stdc++.h>
using namespace std;

void printnum(int);

int main()
{	
	int n;
	cout<< "Choose a number:"<<endl;
	cin>> n;

	printnum(n);

	return 0;
}

void printnum(int n)
	{
	if(n== 0)
		return;
	else
	{
		cout<< n<<" ";
		printnum(n-1);
	}
}