#include <iostream>
using namespace std;

void reversal(int ar[],int start, int stop)
{
	int temp;
	if(((stop+1)-(start))%2== 0)
	{
		for(int i = start;i<start + (((stop+1)-(start))/2) ;i++)
		{
			temp = ar[i];
			ar[i] = ar[start + stop-i];
			ar[start + stop-i] = temp;
		}	
	}

}
int main()
{
	int n,steps;
	bool right;

	cin>>n;
	int ar[n];
	cin>>steps;
	cin>>right;
	for(int i =0;i<n;i++)
	{
		cin>>ar[i];
	}

	if (right)
	{
		reversal(ar,0,n-steps-1);
		reversal(ar,n-steps,n-1);
		reversal(ar,0,n-1);
		for(int i =0;i<n;i++)
		{
			cout<<ar[i];
		}
		cout<<endl;
	}
	else
	{
		reversal(ar,0,steps-1);
		reversal(ar,steps,n-1);
		reversal(ar,0,n-1);
	for(int i =0;i<n;i++)
		{
			cout<<ar[i];
		}
	}
		cout<<endl;

	
	return 0;
}