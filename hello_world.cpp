#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    int T,h,m,temp;
    cin >> T;
    while(T--)
    {
      cin >> h >> m;
      m = m/5;
      if (m < h) {temp = ((h-m) * 30) +((m*5)/2);}
      if (m > h) 
      {
      	temp = ((m-h) * 30) - ((m*5)/2);
      }
      if (m == h) {temp = ((m*5)/2);}

      if (temp > 180)
      	{cout << 360- temp <<endl;}
    	else {cout << temp<<endl;} 
    }
    //write your code here
    
    return 0;
  }