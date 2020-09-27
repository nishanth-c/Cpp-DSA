#include <bits/stdc++.h>
using namespace std;

void merge(int ar[],int left,int mid, int right)
{

	int n1 = mid-left+1;
	int n2 = right- mid;

	int left_ar[n1];
	int right_ar[n2];

	for(int i = 0;i<n1;i++)
		left_ar[i] = ar[left+i];
	for(int i = 0;i<n2;i++)
		right_ar[i] = ar[mid+i+1];
	int k = left,i = 0,j =0;
	while(i < n1 && j <n2)
	{
		ar[k++]= left_ar[i]<=right_ar[j]?left_ar[i++]:right_ar[j++]; 
	}

	while(i < n1)
		ar[k++] = left_ar[i++];
	while(j<n2)
		ar[k++] = right_ar[j++];

}

void merge_sort(int ar[],int left, int right)
{
	if(left>=right)
		return;
	int mid = left + (right -left)/2;
	merge_sort(ar,left,mid);
	merge_sort(ar,mid+1,right);
	merge(ar,left,mid,right);
}

int main()
{
	int n;
	cout<< " Enter the length of the array :";
	cin>>n;
	int ar[n];
	cout<<" Enter the array in a spaced manner";
	for(int i = 0;i<n;i++)
		cin >> ar[i];
	merge_sort(ar,0,n-1);

	for(int i = 0;i<n;i++)
		cout << ar[i];
	return 0;
}