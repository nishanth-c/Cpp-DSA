#include <iostream>
using namespace std;

int main()
{
	int T,n,k,sum,max;
	cin>>T;
	while(T--)
	{
		cin>>n;
		cin>>k;
		sum = 0;
		int ar[n];
		for(int i =0; i<n;i++)
		{
			cin>>ar[i];
		}
		for(int i =0;i<k;i++)
		{
			sum += ar[i];
		}
		max = sum;
		for(int i = k;i<n;i++)
		{
			sum= sum-ar[i-k] +ar[i];
			if(sum>max)
			{
				max = sum;
			}
		}

		cout<<max<<endl;

	}
	return 0;
}
