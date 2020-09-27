#include <bits/stdc++.h>
using namespace std;

void spiral(int r,int c,vector<vector<int>> array,int sc,int sr)
{

for(int i = sc; i<c-1;i++)
cout<< array[0][i]<<" ";

for(int i = sr; i<r;i++)
cout<<array[i][c-1]<<" ";

for(int i = c-2;i>=0;i--)
cout<<array[r-1][i]<<" ";

for(int i = r-2;i>sr;i--)
cout<<array[i][sc]<<" ";


return;
}


int main()
{
int r,c;
cin>>r>>c;
vector <vector<int>> array;


for(int i = 0;i<r;i++)
{
	vector<int> cols;
for(int j = 0;j<c;j++)
{
	int temp;
	cin>>temp;

	cols.push_back(temp);
}
array.push_back(cols);

}

spiral(r-2,c-2,array,1,1);

	return 0;
}