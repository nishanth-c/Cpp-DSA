#include <iostream>
#include<map>
using namespace std;

int main()
{
	map<int,int> previous;
	int n,T,count;
	cin >>T;
	while(T--)
	{
		cin>>n;
		int ar[n];
		ar[0] = 0;
		for(int i = 0;i<n;i++)
		{
			previous.insert(pair<int,int>(i,-1));
		}


		for(int i = 1;i<n;i++)
		{
			if(previous[ar[i-1]] == -1)
			{
				ar[i] = 0;
				previous[ar[i-1]] = i-1;
			}
			else
			{
				ar[i] = i-previous[ar[i-1]]-1;
				previous[ar[i-1]] = i-1;
			}
		}
	count = 0;
	for(int i =0 ; i<n;i++)
	{
		if(ar[i]==ar[n-1])
			++count;
	}
	cout << count<<endl;
	}
	return 0;
}