#include <bits/stdc++.h>
using namespace std;

int josephus(int n, int k)
{
	if(n==1)
		return 0;
	return ((josephus(n-1,k) + k-1)% n+1) ;
}
int main()
{

	int T;
	cin>>T;
	while(T--)
	{
		int n,k;
		cin>>n>>k;
		cout<<josephus(n,k)<<endl
	}
	return 0;
}