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

int bin_iter(int start,int end,int ar[], int data)
{

	while(start<end)
{
	int mid = ( start + end ) / 2;
	if(ar[mid] == data)
		return mid;
	else if(ar[mid] > data)
		 end = mid -1;
	else if(ar[mid] < data)
		start = mid + 1;
}
return -1;
}

int main()
{	
	int ar[] = {1,2,3,4,5,6,7,8,9,10};
	cout << bin_iter(0,9,ar,8); 
	return 0;
}
