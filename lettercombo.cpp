#include <bits/stdc++.h>

using namespace std;

void recur(int p,string s,string x,string digits,unordered_map<char,string> m,vector<string> &res)
{

	if(s.length() == digits.length())
	{
		// cout<< s<<endl;
		res.push_back(s);
		return;
	}


	for(int i = p;i<digits.length();i++)
	{
		x= m[digits[i]];
		for(int j = 0; j<x.length();j++)
		{	
			if(i==s.length())
			recur(p+1,s+x[j],x,digits,m);
		}	
	}

}

int main()
{
	vector<string> res;
	string digits = "234";
	unordered_map<char,string> m = 
	{
		{'2',"abc"},
		{'3',"def"},
		{'4',"ghi"},
        {'5',"jkl"},
        {'6',"mno"},
        {'7',"pqrs"},
        {'8',"tuv"},
        {'9',"wxyz"}
	};
	
	recur(0,"","",digits,m,res);
	return res;

	return 0;
}