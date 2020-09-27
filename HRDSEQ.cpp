#include <iostream>
using namespace std;

bool check(int a[],int x,int n, int &temp)
{
	for(int i = n-1;i>=0;i--)
	{
		if(a[i] == x)
		{
			temp = i;
			return true;
		}
	}
	return false;
}

int main()
{
	int n,T,k,count;
	cin >>T;
	while(T--)
	{
	k = 0;
	cin >>n;
	int ar[n];
	ar[0] =0;
	ar[1] = 0;
	for(int i = 2; i <n;i++)
	{
		if(check(ar,ar[i-1],i-1,k))
		{
			ar[i] = i-k-1;
		}
		else
			ar[i] = 0;
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