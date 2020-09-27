#include <iostream>
using namespace std;
int main()
{
	int city[9] = {0,1,2,0,0,3,1,0,3};
	int lmax[9];
	int rmax[9];
	int water = 0;
	int min;

	lmax[0] =city[0];
	rmax[8] =city[8];

	for(int i = 1; i<9;i++)
	{
		if(city[i]>lmax[i-1])
		{
			lmax[i]= city[i];
		}
		else
		{
			lmax[i] = lmax[i-1];
		}
	}

	for(int j =7; j>=0; j--)
	{
	if(city[j]>rmax[j+1])
		{
			rmax[j]= city[j];
		}
		else
		{
			rmax[j] = rmax[j+1];
		}
	}
	for(int i = 1; i <9;i++)
	{
		min = lmax[i]>rmax[i]?rmax[i]:lmax[i];
		water += min - city[i];
		// cout << lmax[i]<<" "<<rmax[i] <<endl;
	}
	cout << water<<endl;

	// for(int i = 1; i < 8;i++)

	// {
	// 	++c;
	// 	for(int j = i; j >=0 ; j--)
	// 	{
	// 		++c;
	// 		// cout<<"This is j"<<j<<endl;
	// 		if(city[j] > lmax)
	// 		{
	// 			lmax = city[j];
	// 		}
	// 	}
	// 	for(int k = i; k<9;k++)

	// 	{
	// 		++c;
	// 		// cout<<"This is k"<<k<<endl;
	// 		if(city[k]>rmax)
	// 		{
	// 			rmax = city[k];
	// 		}	
	// 	}
	// 		min = lmax>rmax?rmax:lmax;
	// 		water+=min - city[i];
	// }
	// cout<< water<<endl;
	// cout<<c<<endl;

	return 0;
}