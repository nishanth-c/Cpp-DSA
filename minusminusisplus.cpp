#include <bits/stdc++.h>
using namespace std;


int main()
{
	int T;
	cin>>T;

	while(T--)
	{
	string s,t;
	cin>>s>>t;
	int j=0;
	bool flag = false;
		for(int i = 0;i<s.length();i++)
		{
			if(s[i]==t[i-j])
			{
			continue;
			}
			else if(s[i]=='+')
			{
				cout<<"NO"<<endl;
				flag = true;
				break;
			}
			else
			{
				if((i+1 < s.length())&& (s[i+1]=='-'))
				{ 
					++i;
					++j;
				}
				else
				{
				cout<<"NO"<<endl;
				flag = true;
				break;
				}
			}

				
		}
		if(!flag)
		{
			if(t[s.length() - 1 - j] < t.length() -1)
				cout<<"NO"<<endl;
			else
				cout<<"YES"<<endl;
		// if( s.size() == t.size() )
		// 	cout<<"YES"<<endl;
		// else
		// 	cout<<"NO"<<endl;
			
		}

	}
	return 0;
}