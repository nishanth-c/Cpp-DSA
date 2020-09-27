#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a[]= {8,5,1,8,24,9,2};
	int n = sizeof(a)/sizeof(a[0]);
	for(int i=0;i<n;i++)
	{
		int min = i;
		for(int j = i+1; j<n;j++)
		{
			if(a[j]<a[min])
				swap(a[j],a[min]);
		}
	}

	for(int i = 0; i<n;i++)
		cout<<a[i]<<endl;

	return 0;
}