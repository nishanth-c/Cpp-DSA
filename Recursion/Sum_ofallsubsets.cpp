#include <bits/stdc++.h>
using namespace std;

int combosum(vector<int> ar,int i,int sum,vector<int> temp)
{
	// for(auto x = temp.begin();x<temp.end();x++)
	// cout<< *x ;

	// cout<<" sum:"<<sum<<endl;	
	
	if(i == ar.size())
		return sum;
	for(int j = i;j<ar.size();j++)
	{	
		temp.push_back(ar[j]);
		sum = sum + accumulate(temp.begin(),temp.end(),0);
		sum = combosum(ar,j+1,sum,temp);
		temp.pop_back();
	}
	return sum;
	
}

int main()
{
	int T,n;
	cin>>T;
	while(T--)
	{
		cin>>n;
		vector<int> ar;
		for(int i =0;i<n;i++)
		{
			int temp;
			cin>>temp;
			ar.push_back(temp);
		}

		vector<int> temp_1;

		cout<<combosum(ar,0,0,temp_1)<<endl;

	}
	return 0;
}