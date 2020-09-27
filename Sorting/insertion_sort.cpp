#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int ar[],int n)
{
	int var;
	int j;
	for(int i = 1;i<n;i++)
	{
		var=ar[i];
		j = i;
		while(ar[j-1]>var && j>=1)
		{
			ar[j] = ar[j-1];
			j--;
		}
		ar[j] = var;
	}
}
int main()
{
	int n;
	cout<<"Array Length: ";
	cin>>n;
	cout<<"Input the array in a spaced manner :";
	int ar[n];
	for(int i = 0;i<n;i++)
		cin>>ar[i];
	insertion_sort(ar,n);
	for(int i = 0;i<n;i++)
		cout<<ar[i]<<" ";
	cout<<endl;
	return 0;
}