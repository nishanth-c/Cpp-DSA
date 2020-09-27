#include<iostream>
using namespace std;

int main()
{
	long long int T,n,sum;
	cin>>T;
	while(T--)
	{
		int x;
		sum=0;
		cin>>n;
		for(int i =0;i<n-1;i++)
		{

			cin>>x;
			sum+=x;
		}

		cout<<((n*(n+1))/2)- sum<<endl;
	}
	return 0;
}