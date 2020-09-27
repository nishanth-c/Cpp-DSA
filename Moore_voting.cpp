#include <iostream>
using namespace std;

int mode(int ar[],int n)
{
	int maj,count;
	maj = ar[0];
	count = 1;
	for(int j = 1;j<n;j++)
	{
		if(ar[j] == maj)
			++count;
		else
			--count;

		if(count == 0)
		{
			maj = ar[j];
			count =1;
		}
	}

	return (count>=1)?maj:-1;
}

bool check(int ar[],int n,int x)
	{
		int count = 0;
		for(int i = 0;i<n;i++)
		{
			if(ar[i]==x)
				++count;
		}

		return (count>(n/2))?true:false; 
	}

int main()
{
	int T,n;
	cin>>T;
	while(T--)
	{
		cin>>n;
		int ar[n];
		for(int i = 0; i<n;i++)
		{
			cin>>ar[i];
		}
		int x = mode(ar,n);
		if(x>0)
		{
			if(check(ar,n,x))
				cout<<x<<" is Majority"<<endl;
			else
				cout<< "No Majority" <<endl;
		}



	}
	return 0;
}