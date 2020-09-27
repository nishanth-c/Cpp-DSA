#include <bits/stdc++.h>
using namespace std;

int find_pivot(int start, int end, int ar[])
{
	if(start>end)
		return -1;
	int mid = start + (end - start)/2;
	if(ar[mid]>ar[mid-1])
		return mid;									//0 0 0 1 1
	if(ar[mid]<ar[mid+1])
		return mid+1;
	if(ar[mid]>ar[start])
		return find_pivot(start,mid-1,ar);
	return find_pivot(mid+1,end,ar);
}

int main()
{	
	int T,n;
	cin>>T;
	while(T--)
	{
		cin>>n;
		int ar[n];
		for(int i = 0;i<n;i++)
			cin>>ar[i];
		cout<<find_pivot(0,n-1,ar)<<endl;
	}
	return 0;
}