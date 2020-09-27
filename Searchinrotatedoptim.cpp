#include <bits/stdc++.h>
using namespace std;

int binary_recur(int start,int end,int ar[], int data)
{
	if(start>end)
		return -1;
	int mid = ( start + end ) / 2;
	if(ar[mid] == data)
		return mid;
	else if(ar[mid] > data)
		return binary_recur(start,mid -1,ar, data);
	else if(ar[mid] < data)
		return binary_recur(mid + 1,end,ar, data);
}

int find_pivot(int start,int end,int ar[])
{
	if(end<start)
		return -1;
	int mid = start + (end -start)/2;
	if((mid<end) && (ar[mid] > ar[mid+1]))
		return mid+1;
	if((mid >start)&&(ar[mid] < ar[mid-1]))
		return mid;
	if(ar[mid]<ar[start])
		return find_pivot(start,mid-1,ar);
	return find_pivot(mid+1,end,ar);				//{50,60,70,80,90,10,20,30,40};

}

int main()
{
	int n;
	cout<<"Enter the length followed by the array :";
	cin>>n;
	int ar[n];
	for(int i =0;i<n;i++)
		cin>>ar[i];
	cout<<"Enter the element you want to find :";
	int k;
	cin>>k;
	int x = find_pivot(0,n-1,ar);
	if(x == -1)
		cout<<binary_recur(0,n-1,ar,k)<<endl;
	else
	{
		if(ar[0] < k)
			cout<<binary_recur(0,x-1,ar,k)<<endl;
		else
			cout << binary_recur(x,n-1,ar,k)<<endl;
	}
	return 0;
}