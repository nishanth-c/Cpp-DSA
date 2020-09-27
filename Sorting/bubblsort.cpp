#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a[]= {8,5,1,8,24,9,2};
	int n = sizeof(a)/sizeof(a[0]);
	for(int i = n-1;i>=0;i--)
		for(int j =0;j<i;j++)
			if(a[j]>a[j+1])
				swap(a[j],a[j+1]);

	for(int i = 0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;


	return 0;
}