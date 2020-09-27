#include <bits/stdc++.h>
#include<cmath>
  using namespace std;
  
  int dig(int n)
  {
    int c=0;
    while(n)
    {
      c+=1;
      n = n/10;
    }
    return c;
  }
  
  
  int main()
  {
    int T,n,t;
    cin>>T;
    while(T--)
    {
      cin>>n;
      t=dig(n);
      cout<<t;
      
      
    }
    //write your code here
    
    return 0;
  }

  // (( (n%t1) +1) + ( (n/t1) * t1) )*t ;