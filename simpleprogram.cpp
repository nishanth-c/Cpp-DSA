#include <bits/stdc++.h>
using namespace std;

int main()
{
	cout<<"Enter N :";
	int n;
	cin>>n;
	int x =1;
	for(int i = 1;;i++)
	{
		int temp = i;
		while(temp--)
		{
			cout<<x<<" ";
			if(x == n)
				return 0;
			++x;
		}
		cout<<endl;
	}

	return 0;
}