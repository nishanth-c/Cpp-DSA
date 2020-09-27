#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
	int n,k;
	cin>>n;
	cin >>k;
	vector <int> ar;
	int temp;

	for(int i = 0;i<n;i++)
		{
		cin>>temp;
		ar.push_back(temp);
		}
reverse(ar.begin(),ar.end()-k);
reverse(ar.end()-k,ar.end());
reverse(ar.begin(),ar.end());	
	for(int i = 0;i<n;i++)
	{
		cout<<ar[i];
	}


	return 0;
}