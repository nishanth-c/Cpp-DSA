#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
	int ar[] = {50,60,70,80,90,10,20,30,40};
 	int n = sizeof(ar)/sizeof(ar[0]);
 	int start = 0;
	int temp = ar[0];
	int val;
	cout<<"Enter a number :";
	cin>>val;
	int x;
	for(int i = 1;i<n;i++)
	{
		if(ar[i]>temp)
		continue;
		else
		{
		if(binary_search(ar,ar + i,val))
		{
			cout<<lower_bound(ar,ar + i-1,val)- ar<<endl;
			break;
		}
		else
		{
			if(binary_search(ar+i+1,ar+n,val))
			{
				cout<<lower_bound(ar+i+1,ar+n,val)- (ar+i+1) + i+1<<endl;
				break;
			}
			else
			{
				cout<<-1<<endl;
				break;	
			}
			
		}

	}
	}

	return 0;
}